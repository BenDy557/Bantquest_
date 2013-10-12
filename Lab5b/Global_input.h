#ifndef _GLOBAL_INPUT_H_
#define _GLOBAL_INPUT_H_

#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>



class Global_input
{
public:
	Global_input();
	void update();
	bool keys[256];//keyboard

	//Mouse vars
	bool click[3];//buttons
	int x,y;//pos
	int prev_x,prev_y;	
	int initx,inity;

};

#endif