/*
Comp51-01 Spring 2024
LAB05 Part C
Author: Koby Falconeri
*/
#include <iostream>
using namespace std;
void print_board(char board[]);
void player_move(char board[], char player, int& filled);
void change_player(char& name);

int main()
{
	char board[9]{ '1', '2', '3', '4', '5', '6', '7', '8', '9' }, current_player = 'X';
	int boardSize = 9, boardFilled = 0;

	cout << "Welcome to tic-tac-toe Game:" << endl;

	while (boardFilled < 9)
	{
		print_board(board);

		player_move(board, current_player,boardFilled);

		change_player(current_player);
	}

	print_board(board);

	return 0;
}

void player_move(char board[], char player, int& filled)
{
	int space;

	cout << "It is player " << player << "'s turn: ";
	cin >> space;
	cin.clear();
	cin.ignore(100, '\n');

	cout << player << "'s move is " << space << endl;
	if (board[space - 1] != 'X' && board[space - 1] != 'O')
	{
		++filled;
	}
	board[space - 1] = player;
}

void print_board(char board[])
{
	cout << board[0] << ' ' << board[1] << ' ' << board[2] << endl;
	cout << board[3] << ' ' << board[4] << ' ' << board[5] << endl;
	cout << board[6] << ' ' << board[7] << ' ' << board[8] << endl;

}

void change_player(char& name)
{
	if (name == 'X')
	{
		name = 'O';
	}
	else
	{
		name = 'X';
	}
}