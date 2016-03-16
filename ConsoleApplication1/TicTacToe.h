#pragma once
class TicTacToe
{
public:
	TicTacToe();
	~TicTacToe();

private:
	bool move(int, int);
	bool over();
	void print();
	void reset();
	
	char matrix[3][3];
};

