#ifndef _HITBOX_H_
#define _HITBOX_H_

#include "sprite.h"
//#include "Global_input.h"

class Hitbox : public Sprite
{
public:
	Hitbox();
	void move_update();
	int follow_type;//destination,absolute
	vector2 destination;
private:
	//float x,y,z;
	//float xvel,yvel,zvel;
	

public:
	
	void set_destination(vector2 temp_destination);
};

#endif