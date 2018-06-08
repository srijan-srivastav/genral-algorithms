#include <bits/stdc++.h>
using namespace std;
#define N 20
void print_board(int board[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			cout<<board[i][j];
		}
		cout<<endl;
	}
}
bool is_safe(int board[N][N],int row,int col)
{
	int r;
	int c;
  for(c=0;c<col;c++)
  {
  	if(board[row][c]==1)
  		return false;
  }
  for (r=row,c=col;r>=0 && c>=0;r--,c--)
  {
  	if(board[r][c]==1)
  		return false;
  }
  for(r=row,c=col;r<N && c>=0;r++,c--)
  {
  	if(board[r][c]==1)
  		return false;
  }
  return true;
}
bool solve_board(int board[N][N],int col)
{
	int i;
	if(col>=N)
		return true;
	for(i=0;i<N;i++)
   {
	if(is_safe(board,i,col)==true)
	{
       board[i][col]=1;
	
	if(solve_board(board,col+1)==true)
	{
		return true;
	}
	  board[i][col]=0;
   }
    }
  return false;
}
int main()
{
	int board[N][N] = {0};

	if(solve_board(board, 0) == false) {
	    cout<<"NO solution"<<endl;
	} else 
	{
		print_board(board);
	}

	return 0;
}