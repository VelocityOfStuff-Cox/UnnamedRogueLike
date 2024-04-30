#pragma once
#include <vector>
#include <string>
#include <map>
#include "Engine.h"

class GameBoard
{
public:
	void print();
	bool loadBoard();
	void defaultBoard();

private:

	typedef wchar_t doubleChar[2];

	doubleChar weWall{ '|' };
	doubleChar nsWall[2]{ '_','_' };
	doubleChar floor[2]{ '-','-' };
	doubleChar player[2]{ '/','@' };
	doubleChar rat[2]{ '/','r' };

	Vector2D size{ 0,0 };
	std::vector<std::vector<doubleChar>> board;

	bool isTallEdge(Vector2D tile);
	bool isWideEdge(Vector2D tile);
};

