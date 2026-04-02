#include <iostream>
#include "Game.h"
#include <conio.h>
#include "TicTacToe.h"

void TicTacToe::Display() const {
	std::cout << m_board[0] << " | " << m_board[1] << " | " << m_board[2] << "\n" << "--+---+--" << "\n"
		<< m_board[3] << " | " << m_board[4] << " | " << m_board[5] << "\n" << "--+---+--" << "\n"
		<< m_board[6] << " | " << m_board[7] << " | " << m_board[8] << "\n";

	
};
void TicTacToe::TakeTurn() {
	std::cout << "Please Choose 0-8: ";
	std::cin >> m_playerinput;


	if (m_board[m_playerinput] != ' ') {
		std::cout << "That spot is already taken, please choose another: ";
		std::cin >> m_playerinput;
	}


	if (m_currentplayer == 0) {
		if (m_playerinput >= 0 && m_playerinput <= 8) {
			m_board[m_playerinput] = 'X';
			m_currentplayer = 1;
			m_turncount++;
		}
		else {
			std::cout << "Please enter a valid number\n";
		}
	}
	else if (m_currentplayer == 1) {
		if (m_playerinput >= 0 && m_playerinput <= 8) {
			m_board[m_playerinput] = 'O';
			m_currentplayer = 0;
			m_turncount++;
		}
		else {
			std::cout << "Please enter a valid number\n";
		}
	}
}

bool TicTacToe::IsGameOver() const {
	if (m_board[0] == 'X' && m_board[1] == 'X' && m_board[2] == 'X' || m_board[3] == 'X' && m_board[4] == 'X' && m_board[5] == 'X' ||
		m_board[6] == 'X' && m_board[7] == 'X' && m_board[8] == 'X' || m_board[0] == 'X' && m_board[3] == 'X' && m_board[6] == 'X' ||
		m_board[1] == 'X' && m_board[4] == 'X' && m_board[7] == 'X' || m_board[2] == 'X' && m_board[5] == 'X' && m_board[8] == 'X' ||
		m_board[0] == 'X' && m_board[4] == 'X' && m_board[8] == 'X' || m_board[2] == 'X' && m_board[4] == 'X' && m_board[6] == 'X'
		) {
		std::cout << "Player 1 wins!";
		return true;
	}
	else if (m_board[0] == 'O' && m_board[1] == 'O' && m_board[2] == 'O' || m_board[3] == 'O' && m_board[4] == 'O' && m_board[5] == 'O' ||
		m_board[6] == 'O' && m_board[7] == 'O' && m_board[8] == 'O' || m_board[0] == 'O' && m_board[3] == 'O' && m_board[6] == 'O' ||
		m_board[1] == 'O' && m_board[4] == 'O' && m_board[7] == 'O' || m_board[2] == 'O' && m_board[5] == 'O' && m_board[8] == 'O' ||
		m_board[0] == 'O' && m_board[4] == 'O' && m_board[8] == 'O' || m_board[2] == 'O' && m_board[4] == 'O' && m_board[6] == 'O') {
		std::cout << "Player 2 wins!";
		return true;
	}
	else if (m_turncount > 8) {
		std::cout << "Tie! No one wins!";
		return true;
	}
	else {
		return false;
	}
}