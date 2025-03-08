#pragma once
#include <vector>
#include <string>
#include <map>
#include "Engine.h"
#include <string>
#include "Player.h"

class GameBoard
{
public:
	void print();
	bool loadBoard();
	void defaultBoard(Player& player);

private:

	std::string weWall{ '|' };
	std::string nsWall{ "__" };
	std::string floor{ "--" };
	std::string playerSprite{ "/@" };
	std::string rat{ "/r" };

	Vector2D size{ 0,0 };
	std::vector<std::vector<std::string>> board;

	bool isTallEdge(Vector2D tile);
	bool isWideEdge(Vector2D tile);
};

