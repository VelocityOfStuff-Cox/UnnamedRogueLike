#include "GameBoard.h"
#include <iostream>
#include <fstream>

void GameBoard::print()
{
	for (int row{ 0 }; row < board.size(); row++)
	{
		for (int tile{ 0 }; tile < board.at(row).size(); tile++)
		{
			std::cout << board.at(row).at(tile);
		}
		std::cout << std::endl;
	}
}

/*
bool GameBoard::loadBoard()
{
	
	std::ifstream savedGameTest("loadGame.txt");
	bool loadExists{ savedGameTest.is_open() };
	savedGameTest.close();

	if (loadExists)
	{
		std::cout << "(n)ew game, or (l)oad game" << std::endl;
		char choice{ ' ' };
		std::cin >> choice;

		std::string file{ " " };
		switch (choice)
		{
		case 'n':
			file = "newGame.txt";
			break;
		case 'l':
			file = "loadGame.txt";
			break;
		default:
			break;
		}

		std::ifstream inputFile(file);
		if (inputFile.is_open())
		{
			//iterates over each line to load in the map data into each row of the 2D vector.
			

		}
		else
		{
			std::cout << file << " failed to open. check to make sure it is present" << std::endl;
		}
		inputFile.close();
	}
	else
	{
		std::cout << "No saved Game. Loading a newGame" << std::endl;
		std::ifstream inputFile("newGame.txt");
		if (inputFile.is_open())
		{
			//copy of function for loaded
		}
		else
		{
			std::cout << "newGame.txt failed to open. check to make sure it is present" << std::endl;
		}
		inputFile.close();
	}
	
}
*/

void GameBoard::defaultBoard()
{
	size = { 11,11 };
	board.resize(size.x);
	for (int row{ 0 }; row < board.size(); row++)
	{
		board.at(row).resize(size.y);
	}

	for (int row{ 0 }; row < board.size(); row++)
	{
		for (int tile{ 0 }; tile < board.at(row).size(); tile++)
		{
			if (isTallEdge({ row,tile }) && row > 0)
			{
				//double character values assigned to map in parts
				//I am unsure why only this portion takes values when the rest take pointers
				board.at(row).at(tile)[0] = weWall[0];
				board.at(row).at(tile)[1] = weWall[1];
			}
			else if (isWideEdge({ row,tile }) && !isTallEdge({ row,tile }))
			{
				board.at(row).at(tile)[0] = *nsWall[0];
				board.at(row).at(tile)[1] = *nsWall[1];
			}
			else if (!isTallEdge({ row,tile }))
			{
				board.at(row).at(tile)[0] = *floor[0];
				board.at(row).at(tile)[1] = *floor[1];
			}
		}
	}
	
	board.at(size.x / 2).at(size.y / 2)[0] = *player[0];
	board.at(size.x / 2).at(size.y / 2)[1] = *player[1];
}

bool GameBoard::isTallEdge(Vector2D tile)
{
	return tile.y == 0 || tile.y == board.at(tile.x).size() - 1;
}

bool GameBoard::isWideEdge(Vector2D tile)
{
	return tile.x == 0 || tile.x == board.size() - 1;
}
