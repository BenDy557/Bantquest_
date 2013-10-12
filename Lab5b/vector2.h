#ifndef _VECTOR2_H_
#define _VECTOR2_H_

class vector2
{
public:
	vector2();
	vector2(float x_pos,float y_pos);
	vector2 operator + (float);
	vector2 operator - (float);
	vector2 operator / (float);
	vector2 operator * (float);
	void operator = (float);
	
	vector2 operator + (vector2);
	vector2 operator - (vector2);
	float operator * (vector2);//Dot product
	void operator = (vector2);
	float x,y;
};

#endif