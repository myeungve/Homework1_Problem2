#pragma once

#include "Draw.h"

class LeftArrow
{
public:
	int x, y;

	LeftArrow(const int& _x, const int& _y)
	{
		initialize(_x, _y);
	}

	void initialize(const int& _x, const int& _y)
	{
		x = _x;
		y = _y;
	}

	void draw()
	{
		drawLine(x, y, x + 80, y, 1.0f, 0.0f, 0.0f);
		drawLine(x, y, x + 20, y + 20, 1.0f, 0.0f, 0.0f);
		drawLine(x, y, x + 20, y - 20, 1.0f, 0.0f, 0.0f);
	}
};

class RightArrow
{
public:
	int x, y;

	RightArrow(const int& _x, const int& _y)
	{
		initialize(_x, _y);
	}

	void initialize(const int& _x, const int& _y)
	{
		x = _x;
		y = _y;
	}

	void draw()
	{
		drawLine(x, y, x + 80, y, 1.0f, 0.0f, 0.0f);
		drawLine(x + 60, y + 20, x + 80, y, 1.0f, 0.0f, 0.0f);
		drawLine(x + 60, y - 20, x + 80, y, 1.0f, 0.0f, 0.0f);
	}
};

class UpArrow
{
public:
	int x, y1, y2;

	UpArrow(const int& _x, const int& _y1, const int& _y2)
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
		drawLine(x - 20, y2 - 20, x, y2, 1.0f, 0.0f, 0.0f);
		drawLine(x, y2, x + 20, y2 - 20, 1.0f, 0.0f, 0.0f);
	}
};

class DownArrow
{
public:
	int x, y1, y2;

	DownArrow(const int& _x, const int& _y1, const int& _y2)
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
		drawLine(x - 20, y1 + 20, x, y1, 1.0f, 0.0f, 0.0f);
		drawLine(x, y1, x + 20, y1 + 20, 1.0f, 0.0f, 0.0f);
	}
};