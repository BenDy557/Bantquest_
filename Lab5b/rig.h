#ifndef _RIG_H_
#define _RIG_H_

#include "vector2.h"
#include "vector3.h"

class Rig
{
public:
	Rig();
	void move_update();
	vector2 position;
	vector2 fist_1;
};

#endif