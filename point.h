#pragma once
#include<vector>
#include<stdlib.h>
class point
{
protected:
	double x, y;
public:
	point(double a=0, double b=0)
	{
		x = a;
		y = b;
	}
	double getx(void)
	{
		return x;
	}
	double gety(void)
	{
		return y;
	}
	void setx(double x) 
	{
		this->x = x;
	}
	void sety(double y)
	{
		this->y = y;
	}

	
};

