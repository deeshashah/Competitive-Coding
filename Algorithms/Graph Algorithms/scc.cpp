#include <iostream>
#include <vector>
using namespace std;
int graph[50][50], visited[10],n,e;
vector<int> order;
void DFS(int i)
{
	int j,k;
	//cout<<i<<endl;
	visited[i]=1;
	
	for(j=1;j<=n;j++)
	{
		if(visited[j]==0 && graph[i][j]==1)
		{
			DFS(j);
		}
	}
	order.push_back(i);
	
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
	for(k=0;k<order.size();k++)
	{
		cout<<order[k]<<endl;
	}
	for(i=1;i<=e;i++)
	{
		for(k=1;k<=e;k++)
		{
			cout<<graph[i][k]<<" ";
		}
		cout<<endl;
	}	
	cout<<"Transpose"<<endl;
	for(k=1;k<=e;k++)
	{
		for(i=1;i<=e;i++)
		if(graph[k][i] ==1)
		{
			graph[k][i] = 0;
			graph[i][k] = 1;
		}
		
	}
	for(i=1;i<=e;i++)
	{
		for(k=1;k<=e;k++)
		{
			cout<<graph[i][k]<<" ";
		}
		cout<<endl;
	}	
	for(i=1;i<=n;i++)
		visited[i] = 0;	
	DFS(1);
	for(k=0;k<order.size();k++)
	{
		cout<<order[k]<<endl;
	}
	return 0;
}

