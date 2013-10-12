#include "vector2.h"


vector2::vector2 ()
{
	x = 0;
	y = 0;
}

vector2::vector2 (float x_pos,float y_pos)
{
	x = x_pos;
	y = y_pos;
}

//Floating point operator overloading
vector2 vector2::operator+ (float param)
{
	vector2 temp;
	temp.x = x + param;
	temp.y = y + param;
	return (temp);
}

vector2 vector2::operator- (float param)
{
	vector2 temp;
	temp.x = x - param;
	temp.y = y - param;
	return (temp);
}

vector2 vector2::operator/ (float param)
{
	vector2 temp;
	temp.x = x / param;
	temp.y = y / param;
	return (temp);
}

vector2 vector2::operator* (float param)
{
	vector2 temp;
	temp.x = x * param;
	temp.y = y * param;
	return (temp);
}

void vector2::operator= (float param)
{
	x = y = param;
}

//vector operator overloading
vector2 vector2::operator+ (vector2 param)
{
	vector2 temp;
	temp.x = x + param.x;
	temp.y = y + param.y;
	return (temp);
}

vector2 vector2::operator- (vector2 param)
{
	vector2 temp;
	temp.x = x - param.x;
	temp.y = y - param.y;
	return (temp);	
}

float vector2::operator* (vector2 param)//DOT PRODUCT
{
	float temp_f;
	vector2 temp;

	temp.x = x * param.x;
	temp.y = y * param.y;

	temp_f= temp.x+temp.y;
	return (temp_f);
}


void vector2::operator= (vector2 param)
{
	x = param.x;
	y = param.y;
}