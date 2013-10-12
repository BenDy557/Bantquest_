#ifndef _PHYS_POINT_H_
#define _PHYS_POINT_H_

//#include "phys_obj.h"
#include "vector2.h"
#include "Sprite.h"

class Phys_point
{
public:
	Phys_point();

	Phys_point(int x,int y,int z,float scale,int xvel,int yvel);//TODO

	Sprite image;
	bool image_toggle;

//private://TODO
	vector2 position;
	vector2 velocity;

public:
	void Update();
	void Draw();

};

#endif