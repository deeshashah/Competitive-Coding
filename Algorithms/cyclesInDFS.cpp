#include <iostream>
using namespace std;
int graph[50][50], visited[10],n,e;
void DFS(int i, int count)
{
	int j;
	cout<<i<<endl;
	visited[i]=1;
	
	count++;
	for(j=1;j<=n;j++)
	{
		
		if(visited[j]==0 && graph[i][j]==1)
		{
			cout<<i<<"-->"<<j<<endl;
			int count = 0;
			DFS(j,0);
			cout<<j<<"-->"<<i<<endl;

		}
		else if(visited[j]==1 && graph[i][j]==1)
		{
			cout<<"Cycle exists between: "<<i<<"and "<<j<<endl;
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
		graph[y][x] = 1;
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

	DFS(1,0);
	return 0;
}

