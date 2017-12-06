#include<iostream>
#include<stack>
#include<list>
#include<vector>

#define N 100
using namespace std;

stack<int> nodes;
stack<int> topo;
vector<int> graph[N];
vector<int> transposeGraph[N];
vector<int> SCCgraph[N];
vector<pair<int, int> > edges;
int scc[N];
int d[N];
bool visited[N]; 


void addEdge(vector<int> graph[], int u, int v)
{
    graph[u].push_back(v);
    transposeGraph[v].push_back(u);
    edges.push_back(make_pair(u, v));
}

void DFSUtil(int u,vector<int> graph[], bool visited[])
{
	int i;
	visited[u] = true;
	cout<<"Daffu: "<<u<<endl;
	for(i=0;i<graph[u].size();i++)
	{
		if(visited[graph[u][i]]==false)
			DFSUtil(graph[u][i],graph,visited);
	}

	nodes.push(u);
}
void DFSUtil2(int u,vector<int> graph[], bool visited[],int c)
{
	int i;
	visited[u] = true;
	scc[u] = c;
	cout<<u<<endl;
	for(i=0;i<graph[u].size();i++)
	{
		if(visited[graph[u][i]]==false)
			DFSUtil2(graph[u][i],graph,visited,c);
	}
}

void DFS(vector<int> graph[], int n)
{
	int i;
	for(i=1;i<=n;i++)
		visited[i] = false;
	for(i=1;i<=n;i++)
	{
		if(visited[i]==false)
		{
			DFSUtil(i,graph,visited);
		}
	}
}  

void DFSUtilTopo(int u,vector<int> SCCgraph[], bool visited[])
{
	int i;
	visited[u] = true;
	cout<<"Topo: "<<u<<endl;
	for(i=0;i<SCCgraph[u].size();i++)
	{
		if(visited[SCCgraph[u][i]]==false)
			DFSUtilTopo(SCCgraph[u][i],SCCgraph,visited);
	}

	nodes.push(u);
}

int main()
{
    int m=0,n,i,x,y;
    cout<<"Enter the number of nodes and edges:"<<endl;
    cin>>n;
    cout<<"Start entering the edges:"<<endl;
    //int m = 0
    while(cin >> x>>y){
    	addEdge(graph,x,y);
    	m++;
    }
   /* for(i=1;i<=m;i++)
    {
    	cin>>x>>y;
    	addEdge(graph,x,y);
    }*/
    DFS(graph,n);
 
 	for(i=1;i<=n;i++)
		visited[i] = false;
	int c = 0;
    while (!nodes.empty())
    {
    	int v = nodes.top();
    	//cout<<nodes.top()<<endl;
    	nodes.pop();
    	if(visited[v] == false)
    	{
    		c = c+1; // Stores the component number
    		DFSUtil2(v,transposeGraph,visited,c);
    		cout<<endl;
    	}
    }
    cout<<"The varios components are:"<<endl;
    for(i=1;i<=m;i++)
    {
    	if(scc[edges[i].first]!= scc[edges[i].second]) // If u and v belong to different SCC.
    	{
    		SCCgraph[scc[edges[i].first]].push_back(scc[edges[i].second]);
    	}
    }
    for(i=1;i<=c;i++)
		visited[i] = false;
	
	for(i = 1; i <= c; i++)
		d[i] = 0;

	for(i=1;i<=c;i++)
	{
		if(visited[i] == false)
		{
			DFSUtilTopo(i,SCCgraph,visited);	
		}
		
	}
	while(!nodes.empty())
	{
		int v = nodes.top();
		nodes.pop();
		for(i=0;i<SCCgraph[v].size();i++)
		{
			d[i] = max(d[i], d[v]+1);
			cout<<"Dist"<<d[i]<<endl;
		}
	}
	int a =0;
	for(i=1;i<=c;i++)
	{
		cout<<"Dist:"<<d[i]<<endl;
		a = max(a, d[i]);
	}
	cout<<"Finally: "<<a+1<<endl;
    for(i=0;i<SCCgraph[1].size();i++)
    {
    	cout<<SCCgraph[1][i];
    }
    cout<<"The number of SCC:"<<c<<endl;
	return 0;
}