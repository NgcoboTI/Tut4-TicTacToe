#include "TicTacToe.h"
#include <iostream>

using namespace std;

TicTacToe::TicTacToe()
{
	char matrix[3][3] = { '0', '1', '2', '3', '4', '5', '6', '7', '8' };

}


TicTacToe::~TicTacToe()
{
}

bool TicTacToe::move(int r, int c){

}
bool TicTacToe:: over(){
	

}

void TicTacToe ::  print()
{

	cout << "Player 1 = (X)  -  Player 2 = (O)" << endl << endl;
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

	int row, col;
	for (row = 0; row < 3; row++)
	{
		for (col = 0; col < 3; col++)
		{
			matrix[row][col] = { '0' };
		}
	}