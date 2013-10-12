////////////////////////////////////
#include "camera.h"

Camera::Camera()
{
	pos.x=0;
	pos.y=0;
	pos.z=10;
	forward_velocity=0;
	strafe_velocity=0;
	forward.x=0;
	forward.y=0;
	forward.z=-1;

	rot_vel.x=0;
	rot_vel.y=0;
	rot_vel.z=0;

	up.x=0;
	up.y=1;
	up.z=0;

	right.x=1;
	right.y=0;
	right.z=0;

	state=1;//imobile
}


void Camera::cam_move_x(bool move)
{
	if(move)
	{
		vel.x+=0.01;
	}
	else
	{
		vel.x-=0.01;
	}
}
void Camera::cam_move_y(bool move)
{
	if(move)
	{
		vel.y+=0.01;
	}
	else
	{
		vel.y-=0.01;
	}
}
void Camera::cam_move_z(bool move)
{
	if(move)
	{
		vel.z+=0.01;
	}
	else
	{
		vel.z-=0.01;
	}
}

void Camera::cam_move_forward(bool move)
{
	if(move)
	{
		forward_velocity+=0.01;
	}
	else
	{
		forward_velocity-=0.01;
	}
}
void Camera::cam_move_right(bool move)
{
	if(move)
	{
		strafe_velocity+=0.01;
	}
	else
	{
		strafe_velocity-=0.01;
	}
}
void Camera::cam_move_up(bool move)
{
	if(move)
	{
		vel.z+=0.01;
	}
	else
	{
		vel.z-=0.01;
	}
}


void Camera::cam_move_update()
{
	
	forward_velocity*=0.9;
	strafe_velocity*=0.9;

	pos.x+=forward.x*forward_velocity;
	pos.y+=forward.y*forward_velocity;
	pos.z+=forward.z*forward_velocity;

	pos.x+=right.x*strafe_velocity;
	pos.y+=right.y*strafe_velocity;
	pos.z+=right.z*strafe_velocity;

	vel.x*=0.9;
	vel.y*=0.9;
	vel.z*=0.9;
	
	pos.x+=vel.x;
	pos.y+=vel.y;
	pos.z+=vel.z;

	if(vel.x>0.5)
	{
		vel.x=0.5;
	}
	if(vel.y>0.5)
	{
		vel.y=0.5;
	}
	if(vel.z>0.5)
	{
		vel.z=0.5;
	}
}

void Camera::cam_pitch_x(bool rotate)
{
	if(rotate)
	{
		rot_vel.x+=1;
	}
	else
	{
		rot_vel.x-=1;
	}
}
void Camera::cam_pitch_mouse_x(float ydif)
{
	rot_vel.x=-ydif/20;//20 is the sensitivity modifier
}

void Camera::cam_roll_y(bool rotate)
{
	if(rotate)
	{
		rot_vel.y+=0.1;
	}
	else
	{
		rot_vel.y-=0.1;
	}
}
void Camera::cam_yaw_z(bool rotate)
{
	if(rotate)
	{
		rot_vel.z+=1;
	}
	else
	{
		rot_vel.z-=1;
	}
}

void Camera::cam_yaw_mouse_z(float xdif)
{
	rot_vel.z=xdif/20;//20 is the sensitivity modifier
}


void Camera::cam_rot_update()
{
	rot_vel.x*=0.9;
	rot_vel.y*=0.9;
	rot_vel.z*=0.9;

	rot.x+=rot_vel.x;
	rot.y+=rot_vel.y;
	rot.z+=rot_vel.z;
}


void Camera::camera_update()
{
	float pitch=rot.x;
	float yaw=rot.z;
	float roll=rot.y;

	float cosR, cosP, cosY;	//temp values for sin/cos from 
	float sinR, sinP, sinY;	//the inputed roll/pitch/yaw
	
	cosY = cosf(yaw*3.1415/180);
	cosP = cosf(pitch*3.1415/180);
	cosR = cosf(roll*3.1415/180);
	sinY = sinf(yaw*3.1415/180);
	sinP = sinf(pitch*3.1415/180);
	sinR = sinf(roll*3.1415/180);

	forward.x = sinY * cosP;
	forward.y = sinP;
	forward.z = cosP * -cosY;

	up.x = -cosY * sinR - sinY * sinP * cosR;
	up.y = cosP * cosR;
	up.z = -sinY * sinR - sinP * cosR * -cosY;

	right.x=(forward.y*up.z)-(up.y*forward.z);
	right.y=(forward.x*up.z)-(up.x*forward.z);
	right.z=(forward.x*up.y)-(up.x*forward.y);
}

float Camera::get_x()
{
	return pos.x;
}

float Camera::get_y()
{
	return pos.y;
}

float Camera::get_z()
{
	return pos.z;
}
//
float Camera::get_x_rot()
{
	return rot.x;
}

float Camera::get_y_rot()
{
	return rot.y;
}

float Camera::get_z_rot()
{
	return rot.z;
}

float Camera::get_x_forward()
{
	return forward.x;
}

float Camera::get_y_forward()
{
	return forward.y;
}

float Camera::get_z_forward()
{
	return forward.z;
}


float Camera::get_x_up()
{
	return up.x;
}

float Camera::get_y_up()
{
	return up.y;
}

float Camera::get_z_up()
{
	return up.z;
}

void Camera::cam_control_update(Global_input& Input_,int Screen_height,int Screen_width,int Screen_x_pos,int Screen_y_pos)
{
	
	if(state==0)
	{
		if(Input_.keys['E']==true)
		{
			state=1;
			SetCursorPos(Screen_width/2,Screen_height/2);
		}

		if(Input_.keys['D']==true)
		{
			cam_move_right(1);
		}
		if(Input_.keys['A']==true)
		{
			cam_move_right(0);
		}
		if(Input_.keys['S']==true)
		{
			//cam_move_z(1);
			cam_move_forward(false);
		}
		else if(Input_.keys['W']==true)
		{
			//cam_move_z(0);
			cam_move_forward(true);
		}
	
		if(Input_.keys[32]==true)	// D key									
		{
			cam_move_y(1);
		}
		if(Input_.keys[VK_SHIFT]==true)	// D key									
		{
			cam_move_y(0);
		}
	
		////////////////////////////////////////////////ROTATE
		if(Input_.keys['U']==true)	//Look Down									
		{
			cam_pitch_x(1);
		}
		if(Input_.keys['J']==true)	//Look Up
		{
			cam_pitch_x(0);
		}


		if(Input_.keys['Y']==true)	
		{
			cam_roll_y(1);
		}
		if(Input_.keys['I']==true)	
		{
			cam_roll_y(0);
		}

		if(Input_.keys['K']==true)	//Look left									
		{
			cam_yaw_z(1);
		}
		if(Input_.keys['H']==true)	//Look right									
		{
			cam_yaw_z(0);
		}
	
	

		/*if((MousePos.prev_y!=MousePos.y)||(MousePos.prev_x!=MousePos.x))
		{*/
			cam_pitch_mouse_x(Input_.y+30-(Screen_height/2));
			cam_yaw_mouse_z(Input_.x+8-(Screen_width/2));
		//}

		Input_.prev_x=Input_.x;
		Input_.prev_y=Input_.y;



		//MousePos.x=S_WIDTH/2;
		//MousePos.y=S_HEIGHT/2;

		
		
	}
	else
	{
		if(Input_.keys['E']==true)
		{
			state=0;
			SetCursorPos(Screen_width/2,Screen_height/2);
		}
	}


	SetCursorPos((Screen_width/2)+Screen_x_pos,(Screen_height/2)+Screen_y_pos);
}