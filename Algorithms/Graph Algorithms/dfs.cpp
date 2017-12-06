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
			DFS(j);
			cout<<j<<"-->"<<i<<endl;

		}
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
		visited[i] = 0;

	DFS(1);
	return 0;
}
