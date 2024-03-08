/*
Comp51-01 Spring 2024
LAB05 Part B
Author: Koby Falconeri
*/
#include <iostream>
using namespace std;
void print_board(char board[]);
void player_move(char board[], int &filled);

int main()
{
	char board[9]{ '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	int boardSize = 9, boardFilled = 0;

	cout << "Welcome to tic-tac-toe Game:" << endl;

	while (boardFilled < 9)
	{
		print_board(board);

		player_move(board, boardFilled);
	}

	print_board(board);

	return 0;
}

void player_move(char board[], int &filled)
{
	int space;

	cout << "Select a move (1-9): ";
	cin >> space;
	cin.clear();
	cin.ignore(100, '\n');

		cout << "Your move is " << space << endl;
		if (board[space - 1] != 'X')
		{
			++filled;
		}
		board[space - 1] = 'X';
}

void print_board(char board[])
{
	cout << board[0] << ' ' << board[1] << ' ' << board[2] << endl;
	cout << board[3] << ' ' << board[4] << ' ' << board[5] << endl;
	cout << board[6] << ' ' << board[7] << ' ' << board[8] << endl;

}