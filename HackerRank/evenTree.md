# Even Tree
[https://www.hackerrank.com/challenges/even-tree/problem](https://www.hackerrank.com/challenges/even-tree/problem)

### My C++ solution

```
#include <iostream>
using namespace std;
int graph[150][150], visited[120],n,e,wt[150]={0},;
void DFS(int i)
{
	int j,leaf = 1;
	visited[i]=1;
    int subCount = 0;
	for(j=1;j<=n;j++)
	{   
        if(visited[j]==0 && graph[i][j]==1)
        {
            subCount = subCount+1;
            leaf = 0;
            DFS(j);
        }
        
	}   
    wt[i] = subCount;
    if(leaf == 0)
    {
        for(j=1;j<=n;j++)
        {
            if(graph[i][j]==1 && !leaf)
            {
                wt[i] = wt[j]+wt[i];
            }
        }
    }
}
int main()
{
	int i,j,x,y,k;
	cin>>n;
	cin>>e;
	for(k=1;k<=e;k++)
	{
		cin>>x>>y;
		graph[x][y] = 1;
        graph[y][x] = 1;
	}
	
	for(i=1;i<=n;i++)
		visited[i] = 0;

	DFS(1);
    int evenCount = 0;
    for(i=2;i<=n;i++)
    {
        if(wt[i]!=0)
        {
            wt[i] = wt[i]+1;
        }
        if(wt[i]%2==0 && wt[i]!=0)
        {
            evenCount++;
        }
    }
    cout<<evenCount<<endl;
	return 0;
}

```
