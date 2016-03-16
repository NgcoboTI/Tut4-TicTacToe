#include <iostream>
#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe()
{
	char matrix[3][3] = { '0', '1', '2', '3', '4', '5', '6', '7', '8' };

}


TicTacToe::~TicTacToe()
{
}

void TicTacToe::move(int r,char player){
		switch (r)
	{
	case '1': matrix[0][0] = player; break;
	case '2': matrix[0][1] = player; break;
	case '3': matrix[0][2] = player; break;
	case '4': matrix[1][0] = player; break;
	case '5': matrix[1][1] = player; break;
	case '6': matrix[1][2] = player; break;
	case '7': matrix[2][0] = player; break;
	case '8': matrix[2][1] = player; break;
	case '9': matrix[2][2] = player; break;
	}

}
char TicTacToe:: over(){

	//check for a game winner
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

}

void TicTacToe ::  print()
{
	//print the game board
	
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << matrix[0] << "  |  " << matrix[1] << "  |  " << matrix[2] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << matrix[3] << "  |  " << matrix[4] << "  |  " << matrix[5] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << matrix[6] << "  |  " << matrix[7] << "  |  " << matrix[8] << endl;
	cout << "     |     |     " << endl << endl;

}

void TicTacToe::reset(){
	//reset the matrix or board
	int row, col;
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			matrix[row][col] = { '0' };
		}
	}
}