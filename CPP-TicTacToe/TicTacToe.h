#pragma once
#include <iostream>
#include "Game.h"

class TicTacToe : public Game {
private:
	char m_board[9] = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
	int m_playerinput;
	int m_currentplayer;
	int m_turncount;

public:
	void TakeTurn() override;
	 bool IsGameOver() const override;
	 void Display() const override;
};