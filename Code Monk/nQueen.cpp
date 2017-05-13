#include <iostream>
using namespace std;
int n;
bool is_attacked(int x,int y,int n,int board[][4])
{
	int row,col;
	for(row = 0;row<n;row++)
	{
		if(board[row][y]==1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	for(col = 0;col<n;col++)
	{
		if(board[x][col]==1)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	for(row =0;row<n;row++)
	{
		for(col=0;col<n;col++)
		{
			if((row+col)==(x+y) || (row-col) ==(x-y))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
}
bool nQueen(int n,int board[][4])
{
	if(n==0)
	{
		return true; //All queens have been placed
	}
	else
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(is_attacked(i,j,n,board))
				{
					cout<<"Attack queens"<<endl;
				}
				else
				{
					board[i][j] = 1; 
				}
				if(nQueen(board,n-1)==true)
				{
					return true;  
				}    
				else
				{
					board[i][j] = 0 ;
				}
            	
			}
		}
	}
}
int main()
{
    cout << "Enter the number n :" << endl;
    int n,i,j;
    //cin>>n;
    int board[4][4];
    // Code to fill the board with 0s
	std::fill(board[0], board[0] + 4 * 4, 0);
    
    nQueen(4,board);
    for(i=0;i<4;i++)
    {
    	for(j=0;j<4;j++)
    	{
    		cout<<board[i][j]<<" ";
    	}
    	cout<<endl;
    }
    return 0;
}
