#include <iostream>
#include "TicTacToe.h"

using namespace std;

int main()
{
TicTacToe obj;
	char player1 = 'X', player2 = 'O';
    char mov;
	char cplayer = player1;

	cout << "Player 1 = (X)  &&  Player 2 = (O)" << endl << endl;

	
	for (int i = 0;i < 9; i++)
	{
		obj.print();
		cout << endl << "Your move:" << endl << endl;
		cout <<"Player :" << player1 << " (1-9): ";

		//Store the players move

		cin >> mov;
		cout << "Current Player: "  << cplayer << endl;
	
		if (cplayer == player1) cplayer = player2;
		else cplayer = player1;
	}

}