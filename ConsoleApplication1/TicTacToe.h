#pragma once
class TicTacToe
{
public:
	TicTacToe();
	~TicTacToe();


	void move(int,char);
	char over();
	void print();
	void reset();

 private :	
	char matrix[3][3];
};

