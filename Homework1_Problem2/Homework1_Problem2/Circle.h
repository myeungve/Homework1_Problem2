#pragma once

#include "Draw.h"
#include "Geometric.h"

// Child Class
class Circle1 : public Geometric
{
public:
	int x, y, r;

	Circle1(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 1.0f, 0.0f, 0.0f);
	}
};

// Child Class
class Circle2 : public Geometric
{
public:
	int x, y, r;

	Circle2(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 1.0f, 0.0f, 0.0f);
	}
};

// Child Class
class Circle3 : public Geometric
{
public:
	int x, y, r;

	Circle3(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 1.0f, 0.0f, 0.0f);
	}
};

// Child Class
class Circle4 : public Geometric
{
public:
	int x, y, r;

	Circle4(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawCircle(x, y, r, 1.0f, 0.0f, 0.0f);
	}
};

class Doughnut
{
public:
	int x, y, r;

	Doughnut(const int& _x, const int& _y, const int& _r)
	{
		initialize(_x, _y, _r);
	}

	void initialize(const int& _x, const int& _y, const int& _r)
	{
		x = _x;
		y = _y;
		r = _r;
	}

	void draw()
	{
		drawDoughnut(x, y, r, 1.0f, 0.0f, 0.0f);
	}
};