/*
Comp51-01 Spring 2024
LAB05 Part A
Author: Koby Falconeri
*/
#include <iostream>
using namespace std;
void print_board(char board[]);

int main()
{
	char board[9]{ '1', '2', '3', '4', '5', '6', '7', '8', '9' };

	cout << "Welcome to tic-tac-toe Game:" << endl;

	print_board(board);

	return 0;
}

void print_board(char board[])
{
	cout << board[0] << ' ' << board[1] << ' ' << board[2] << endl;
	cout << board[3] << ' ' << board[4] << ' ' << board[5] << endl;
	cout << board[6] << ' ' << board[7] << ' ' << board[8] << endl;
}