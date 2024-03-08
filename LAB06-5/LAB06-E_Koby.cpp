/*
Comp51-01 Spring 2024
LAB05 Part D
Author: Koby Falconeri
*/
#include <iostream>
using namespace std;
void print_board(char board[]);
void player_move(char board[], char player, int& filled);
void change_player(char& name);
bool win_check(char board[], char player);

int main()
{
	char board[]{ '1', '2', '3', '4', '5', '6', '7', '8', '9' }, current_player = 'X';
	int boardSize = 9, boardFilled = 0;
	bool winX = false, winO = false;

	cout << "Welcome to tic-tac-toe Game:" << endl;

	while (boardFilled < 9)
	{
		print_board(board);

		player_move(board, current_player, boardFilled);

		change_player(current_player);

		winX = win_check(board, 'X');
		winO = win_check(board, 'O');
		if (winX == true)
		{
			cout << "Player X has won!!" << endl;
			break;
		}
		else if (winO == true)
		{
			cout << "Player O has won!!" << endl;
			break;
		}
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

	while (!(board[space - 1] != 'X' && board[space - 1] != 'O' && space < 10))
	{
		cout << "** Please choose a valid space that has not been picked ** \n" << endl;
		cout << "It is player " << player << "'s turn: ";
		cin >> space;
		cin.clear();
		cin.ignore(100, '\n');
	}
	cout << player << "'s move is " << space << endl;
	board[space - 1] = player;
	++filled;
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

bool win_check(char board[], char player)
{
	int x = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (board[i * 3] == player && board[i * 3 + 1] == player && board[i * 3 + 2] == player)
		{
			return true;
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		if (board[i] == player && board[i + 3] == player && board[i + 6] == player)
		{
			return true;
		}
	}
	if (board[0] == player && board[4] == player && board[8] == player)
	{
		return true;
	}

	if (board[2] == player && board[4] == player && board[6] == player)
	{
		return true;
	}
	return false;
}