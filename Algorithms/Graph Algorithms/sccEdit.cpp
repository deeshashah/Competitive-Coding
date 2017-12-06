#include<bits/stdc++.h>
using namespace std;
const int MAXN = 20;
vector<int> adj[MAXN];
bool vis[MAXN];
stack<int> st;
pair<int,int> v[MAXN];
void DFS(int s) {
	vis[s]=true;
	for(int i=0;i<(int)adj[s].size();i++) {
		if(!vis[adj[s][i]])
			DFS(adj[s][i]);
	}
	st.push(s);
}
int c;
void DFS2(int s) {
	vis[s]=true;
	c++;
	for(int i=0;i<(int)adj[s].size();i++) {
		if(!vis[adj[s][i]]) DFS2(adj[s][i]);
	}
}
int main() {
	// freopen("TASK.in","r",stdin);	
	// freopen("TASK.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=m;i++) {
		int x,y;
		cin>>x>>y;
		adj[x].push_back(y);
		v[i]=make_pair(x,y);
	}
	for(int i=1;i<=n;i++) if(!vis[i]) DFS(i);
	for(int i=1;i<=n;i++) {
		adj[i].clear();
		vis[i]=false;
	}
	for(int i=1;i<=m;i++) {
		int x=v[i].second;
		int y=v[i].first;
		adj[x].push_back(y);
	}
	int ans=0;
	while(!st.empty()) {
		int src=st.top();
		st.pop();
		if(vis[src]) continue;
		c=0;
		DFS2(src);
		if(c&1) ans+=c;
		else ans-=c;
	}
	cout<<ans<<endl;
	return 0;
}