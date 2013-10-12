#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "rig.h"
#include "sprite.h"
#include "Global_input.h"

class Player : public Sprite
{
public:
	Player();
	void move_update();

	Rig rig_;
	int stance;//defensive aggresive 
	GLuint Pose_[10];
	int pose;
	enum {high_stance,high_punch,low_stance,low_punch,mid_stance,mid_punch};
private:
	float x,y,z;
	//float xvel,yvel,zvel;
	

public:
	void control_update(Global_input& Input_,int Screen_height,int Screen_width);
};

#endif