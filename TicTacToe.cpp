// TicTacToe.cpp : Defines the entry point for the console application.
// author: Jonathan Rudnick
// date: 2/26/2014
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	bool won = false;
	bool playerOne = true;
	int row;
	int col;
	int emptySpaces = 9;
	char board[3][3] = { { '*', '*', '*' }, { '*', '*', '*' }, { '*', '*', '*' } };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << ' ';
		}
		cout << endl;
	}
	while (!won) {
		if (playerOne) {
			cout << "Player One, please choose a row and column: ";
			cin >> row >> col;
			board[row][col] = 'X';
			emptySpaces--;
			playerOne = false;
		}
		else {
			cout << "Player Two, please choose a row and column: ";
			cin >> row >> col;
			board[row][col] = 'O';
			emptySpaces--;
			playerOne = true;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				cout << board[i][j] << ' ';
			}
			cout << endl;
		}
		if ((board[0][0] == 'X' && board[0][0] == board[0][1] && board[0][0] == board[0][2]) || (board[1][0] == 'X' && board[1][0] == board[1][1] && board[1][0] == board[1][2]) || (board[2][0] == 'X' && board[2][0] == board[2][1] && board[2][0] == board[2][2]) || (board[0][0] == 'X' && board[0][0] == board[1][0] && board[0][0] == board[2][0]) || (board[0][1] == 'X' && board[0][1] == board[1][1] && board[0][1] == board[2][1]) || (board[0][2] == 'X' && board[0][2] == board[1][2] && board[0][2] == board[2][2]) || (board[0][0] == 'X' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == 'X' && board[0][2] == board[1][1] && board[0][2] == board[2][0])) {
			cout << "Player One Wins!";
			won = true;
		}
		else if ((board[0][0] == 'O' && board[0][0] == board[0][1] && board[0][0] == board[0][2]) || (board[1][0] == 'O' && board[1][0] == board[1][1] && board[1][0] == board[1][2]) || (board[2][0] == 'O' && board[2][0] == board[2][1] && board[2][0] == board[2][2]) || (board[0][0] == 'O' && board[0][0] == board[1][0] && board[0][0] == board[2][0]) || (board[0][1] == 'O' && board[0][1] == board[1][1] && board[0][1] == board[2][1]) || (board[0][2] == 'O' && board[0][2] == board[1][2] && board[0][2] == board[2][2]) || (board[0][0] == 'O' && board[0][0] == board[1][1] && board[0][0] == board[2][2]) || (board[0][2] == 'O' && board[0][2] == board[1][1] && board[0][2] == board[2][0])) {
			cout << "Player Two Wins!";
			won = true;
		}
		else if (emptySpaces == 0) {
			cout << "It's a tie!";
			won = true;
		}
	}
	return 0;
}