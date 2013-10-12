#ifndef _SPRITE_H_
#define _SPRITE_H_


#include <windows.h>
#include <stdio.h>
#include <mmsystem.h>
#include <math.h>
#include <gl/gl.h>
#include <gl/glu.h>

/////////////////////////////////////////////////////STRING STUFF
#include <iostream>
#include <string>
#include <sstream>
///////////////////////////////////////

#include "vector2.h"
#include "vector3.h"

class Sprite
{
public:

	Sprite();
	
	vector2 position;
	vector2 orientation;

	vector2 scale;
	vector3 color;

	int width;
	int height;

	int x_frame;//frame set on the x-axis of sprite sheet
	int y_frame;//frame set on the y-axis of sprite sheet

	int numSprites;
	int xOffset;
	int yOffset;

	int layer;

	void Draw();
	//void LoadABitmap(LPSTR szFileName);
	void Update();
};

#endif