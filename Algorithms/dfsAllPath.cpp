#include <iostream>
using namespace std;
int graph[50][50], visited[20],n,e, parent[20],maxi,child[20];
int DFS(int i)
{
	int j;
	cout<<i<<endl;
	

	for(j=1;j<=n;j++)
	{
		
		if(visited[j]==0 && graph[i][j]==1)
		{
			child[j] = j;
			parent[j] = i;
			cout<<i<<"-->"<<j<<endl;
			DFS(j);
		}
		// cout<<"Visiting node : "<<j<<endl;
	}
	
}
int main()
{
	int i,j,x,y,k;
	cout<<"Enter the number of nodes and number of edges: ";
	cin>>n;
	cin>>e;
	cout<<"Enter the edges :";
	for(k=1;k<=e;k++)
	{
		cin>>x>>y;
		graph[x][y] = 1;
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<graph[i][j]<<" ";
		}
		cout<<endl;
	}
	for(i=1;i<=n;i++)
		visited[i] = 0;

	for(i=1;i<=n;i++)
	{
		if(visited[i]==0)
		{	
			visited[i]=1;
			cout<<i<<"Okkaaayy"<<endl;
			DFS(i);
		}
	}
	for(i=1;i<=n;i++)
	{
		cout<<"i:"<<i<<"--->"<<child[i]<<endl;
	}
	return 0;
}

