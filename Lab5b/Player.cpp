#include "player.h"
 
Player::Player()
{
	/*x_frame=0; 
	y_frame=0;*/
	stance=0;
}
 
void Player::move_update()
{
	//velocity.x*=0.9;
	//velocity.y*=0.9;
	


	//glTranslatef (x,y,0.0);

}
 

void Player::control_update(Global_input& Input_,int Screen_height,int Screen_width)
{
	
	if(stance==0)
	{
		/*if(Input_.keys['E']==true)
		{
			control_state=1;
		}*/

		if(Input_.keys['D']==true)
		{
			//velocity.x+=0.01;
		}
		if(Input_.keys['A']==true)
		{
			//velocity.x-=0.01;
		}
		
		if(Input_.keys['S']==true)
		{
			pose=low_stance;
		}
		else if(Input_.keys['W']==true)
		{
			pose=high_stance;
		}
		else
		{
			pose=mid_stance;
		}
	
			
		if(Input_.keys['J']==true)
		{
			pose+=1;
		}

		Input_.prev_x=Input_.x;
		Input_.prev_y=Input_.y;		
	}
	else
	{
		/*if(Input_.keys['E']==true)
		{
			control_state=0;
		}*/
	}


	SetCursorPos(Screen_width/2,Screen_height/2);
}