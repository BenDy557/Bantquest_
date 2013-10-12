#ifndef _CAMERA_H_
#define _CAMERA_H_

#include <math.h>
#include "vector3.h"
#include "Global_input.h"


//class Input;
class Camera 
{
public:
	Camera();

	int state;
	//Input* cam_input;
private:
	vector3 pos;//x,y,z positions
	vector3 vel;//x,y,z velocities
	vector3 rot;
	vector3 rot_vel;
	
	float forward_velocity;
	float strafe_velocity;

	vector3 forward,up,right;//forward,up,right



public:
	void cam_movement();
	
	void cam_pitch_x(bool rotate);
	void cam_roll_y(bool rotate);
	void cam_yaw_z(bool rotate);

	void cam_pitch_mouse_x(float ydif);
	void cam_yaw_mouse_z(float xdif);

	//move bool value, positive increment or negative
	void cam_move_x(bool move);
	void cam_move_y(bool move);
	void cam_move_z(bool move);

	void cam_move_forward(bool move);
	void cam_move_right(bool move);
	void cam_move_up(bool move);

	void cam_rot_update();
	
	float get_x();
	float get_y();
	float get_z();
	
	float get_x_rot();
	float get_y_rot();
	float get_z_rot();

	float get_x_forward();
	float get_y_forward();
	float get_z_forward();

	float get_x_up();
	float get_y_up();
	float get_z_up();

	void cam_move_update();
	
	void camera_update();

	void cam_control_update(Global_input& Input_,int Screen_height,int Screen_width,int Screen_x_pos,int Screen_y_pos);
};

#endif