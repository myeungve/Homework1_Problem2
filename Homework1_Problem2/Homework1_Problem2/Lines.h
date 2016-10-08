#pragma once

#include "Draw.h"

class Slash
{
public:
	int x, y;

	Slash(const int& _x, const int& _y)
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
		drawLine(x - 1, y, x + 70, y + 71, 1.0f, 0.0f, 0.0f);
		drawLine(x, y + 1, x + 71, y + 71, 1.0f, 0.0f, 0.0f);
		drawLine(x, y + 1, x + 71, y + 70, 1.0f, 0.0f, 0.0f);
		drawLine(x, y, x + 71, y + 70, 1.0f, 0.0f, 0.0f);
	}
};

class Cross
{
public:
	int x1, x2, y1, y2;

	Cross(const int& _x1, const int& _y1, const int& _x2, const int& _y2)
	{
		initialize(_x1, _y1, _x2, _y2);
	}

	void initialize(const int& _x1, const int& _y1, const int& _x2, const int& _y2)
	{
		x1 = _x1;
		y1 = _y1;
		x2 = _x2;
		y2 = _y2;
	}

	void draw()
	{
		drawLine(x1, y1, x2, y2, 1.0f, 0.0f, 0.0f);
		drawLine(x1, y2, x2, y1, 1.0f, 0.0f, 0.0f);
	}
};

class A
{
public:
	int x1, x2, y1, y2;

	A(const int& _x1, const int& _y1, const int& _x2, const int& _y2)
	{
		initialize(_x1, _y1, _x2, _y2);
	}

	void initialize(const int& _x1, const int& _y1, const int& _x2, const int& _y2)
	{
		x1 = _x1;
		y1 = _y1;
		x2 = _x2;
		y2 = _y2;
	}

	void draw()
	{
		drawLine(x1, y1, (int)(x1 + x2) * 0.5, y2, 1.0f, 0.0f, 0.0f);
		drawLine(x1 + 1, y1, (x1 + x2) * 0.5 + 1, y2, 1.0f, 0.0f, 0.0f);
		drawLine((x1 + x2) * 0.5, y2 - 1, x2, y1 + 1, 1.0f, 0.0f, 0.0f);
		drawLine((x1 + x2) * 0.5 + 1, y2 - 1, x2 + 1, y1 + 1, 1.0f, 0.0f, 0.0f);
		drawLine((x1 + (x1 + x2) * 0.5) * 0.5, (y1 + y2) * 0.5, (x2 + (x1 + x2) * 0.5) * 0.5, (y1 + y2) * 0.5, 1.0f, 0.0f, 0.0f);
	}
};

class Vertical
{
public:
	int x, y1, y2;

	Vertical(const int& _x, const int& _y1, const int& _y2)
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
	}
};