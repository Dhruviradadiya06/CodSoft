#include<iostream>
using namespace std;
void drawboard(char board[3][3])
{
	cout<<"-------------------\n";
	for(int i=0;i<3;i++)
	{
		cout<<"| ";
		for(int j=0;j<3;j++)
		{
			cout<<board[3][3]<<" | ";
		}
		cout<<"\n-----------------\n";
	}
}
bool checkwin(char board[3][3], char player)
{
	for(int i=0;i<3;i++)
	{
		if(board[i][0]==player && board[i][1]==player&& board[i][2]==player)
		{
			return true;	
		}	
		if(board[0][i]==player&&board[1][i]==player&&board[2][i]==player)
		{
			return true;
		}
	}
	if(board[0][0]==player&&board[1][1]==player&&board[2][2]==player)
	{
		return true;
	}
	if(board[0][2]==player&&board[1][1]==player&&board[2][0]==player)
	{
		return true;
	}
	return false;
}
int main()
{
	char board[3][3]={{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
	char player='x';
	int row,col;
	int turn;
	cout<<"Welcome to Tic-Tac-Toe!\n";
	for(turn=0;turn<9;turn++)
	{
		drawboard(board);
		while(true)
		{
			cout<<"Player"<<player<<",enter row(0-2) and column (0-2):";
			cin>>row>>col;
			if(board[row][col]!=' '||row<0|| row>2||col<0||col>2)
			{
				cout<<"Invalid move. Try again.\n";
			}
			else
			{
				break;
			}
		}
		board[row][col]=player;
		if(checkwin(board,player))
		{
			drawboard(board);
			cout<<"player"<<player<<"wins!\n";
			break;
		}
		player=(player=='x')?'0':'x';
	}
	drawboard(board);
	if(turn==9 && !checkwin(board,'x')&& !checkwin(board,'o'))
	{
		cout<<"It's a draw!\n";
	}
	return 0;
}
