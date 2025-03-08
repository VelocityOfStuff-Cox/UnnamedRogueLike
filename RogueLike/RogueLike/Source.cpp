#include <iostream>
#include "Engine.h"
#include "GameBoard.h"
#include "Player.h"

bool gameOver{ false };

int main()
{
	GameBoard gameBoard;
	gameBoard.defaultBoard();
	//Player with default values
	Player player("/@", {});

	while (!gameOver)
	{
		//run game logic. end game when player or all enemies killed

		//test logic for GameBoard
		gameBoard.print();
		
		gameOver = true;
	}
}