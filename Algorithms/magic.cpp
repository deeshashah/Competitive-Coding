#include<bits/stdc++.h>
using namespace std;
#define N 200010
vector<int> g[N], rg[N], new_g[N];
vector<pair<int, int> > edges;
stack<int> S;
int dist[N], comp[N];
bool visited[N];
void dfs0(int u)  // First dfs of Kosaraju's algorithm
{
  visited[u] = true;
  for(auto v : g[u])
    if(!visited[v])
      dfs0(v);
  S.push(u);
}
void dfs1(int u, int curr) // Second dfs of Kosaraju on transpose graph
{
  visited[u] = true;
  comp[u] = curr;
  for(auto v : rg[u])
  {
    if(!visited[v])
      dfs1(v, curr);
  }
}
void dfs2(int u)  // for finding topological sorting of the SCC DAG
{
  visited[u] = true;
  for(auto v : new_g[u])
  {
    if(!visited[v])
      dfs2(v);
  }
  S.push(u);
}
int main()
{
  int n,m;
  cin>>n>>m;
  for(int i = 1;i <= m; i++)
  {
    int u,v;
    cin>>u>>v;
    g[u].push_back(v);  //original graph
    rg[v].push_back(u); //transpose graph
    edges.push_back(make_pair(u, v));
  }
  for(int i = 1; i <= n; i++)
    visited[i] = false;   // clear visited array
  //Kosaraju algorithm for finding SCC
  for(int i = 1;i <= n; i++)
  {
    if(!visited[i])
      dfs0(i);
  }
  for(int i = 1; i <= n; i++)
    visited[i] = false;   // clear visited array
  int curr = 0; // corresponds to total number of SCC
  while(!S.empty())
  {
    int u = S.top();
    S.pop();
    if(!visited[u])
    {
      curr++;
      dfs1(u, curr);
    }
  }
  // create new SCC DAG
  for(int i=0;i<m;i++)
  {
    if(comp[edges[i].first] != comp[edges[i].second]) // if edges between nodes of different scc's
      new_g[comp[edges[i].first]].push_back(comp[edges[i].second]); // add edges in the new graph between these two scc
  }
  for(int i = 1; i <= curr; i++)
    dist[i] = 0;
  for(int i = 1;i <= n; i++)
    visited[i] = false;   // clear visited array
  //do a topological sort for finding longest path in a DAG
  for(int i = 1; i <= curr; i++)
  {
    if(!visited[i])
      dfs2(i);
  }
    while(!S.empty())
    {
      int u = S.top();
      S.pop();
      for(auto v : new_g[u])
        dist[v] = max(dist[v],dist[u] + 1);
    }
  int ans = 0;
  for(int i = 1; i <= curr; i++)
    ans=max(ans, dist[i]);  //take maximum over all the dist[i]'s
  cout<<ans<<endl;
  return 0;
}