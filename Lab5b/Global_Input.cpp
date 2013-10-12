#include "Global_input.h"

Global_input::Global_input()
{
	keys[256]=false;//keyboard

	//Mouse vars
	click[3]=false;//buttons
	x=y=0;//pos
	prev_x=prev_y=0;	
	initx=inity=0;
}

void update()
{
	
}