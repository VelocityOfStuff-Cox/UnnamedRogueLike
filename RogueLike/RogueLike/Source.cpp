#include <iostream>
#include "Engine.h"
#include "GameBoard.h"

bool gameOver{ false };

int main()
{
	GameBoard gameBoard;
	gameBoard.defaultBoard();
	//Player with default values

	wchar_t testChar[2]{ L'-','_'};

	std::wcout << testChar << std::endl;

	while (!gameOver)
	{
		//run game logic. end game when player or all enemies killed

		//test logic for GameBoard
		gameBoard.print();
		
		gameOver = true;
	}
}