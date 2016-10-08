#pragma once

#include "Draw.h"

class Square
{
public:
	int x, y1, y2;

	Square(const int& _x, const int& _y1, const int& _y2)
	{
		initialize(_x, _y1, _y2);
	}

	void initialize(const int& _x, const int& _y1, const int& _y2)
	{
		x = _x;
		y1 = _y1;
		y2 = _y2;
	}

	void draw()
	{
		drawVertical(x, y1, y2, 1.0f, 0.0f, 0.0f);
		drawVertical(x + 70, y1, y2, 1.0f, 0.0f, 0.0f);
		drawLine(x, y1, x + 70, y1, 1.0f, 0.0f, 0.0f);
		drawLine(x, y2, x + 70, y2, 1.0f, 0.0f, 0.0f);
	}
};