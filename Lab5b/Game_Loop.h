#ifndef _GAME_LOOP_H
#define _GAME_LOOP_H

#include <math.h>

#include "tex.h"
#include "vector2.h"
#include "vector3.h"
#include "rig.h"

#include "Global_input.h"
#include "player.h"
#include "hitbox.h"
#include "camera.h"

#include "phys_point.h"

#include "map_grid.h"

#include <gl/gl.h>
#include <gl/glu.h>


class Game_Loop
{
public:
	Game_Loop();
	void Run();
	//static void set_quitting(bool quitting) { quitting_ = quitting; }//TODO
	//static bool quitting() { return quitting_; }

	void Init();
	//void update_control();
	//void CleanUp();

	void Update();//Game update loop

	void Render();//render function

	////game loop boolean
	////static bool quitting_;//TODO
	////int frame;
	//
	////MENU
	////static bool paused_;
	//	
	////MENU SPRITES
	//PS2SpriteT menu_title_formula_[2];
	//
	//CTexture menu_title_formula_img;
	//
	////GAME SPRITES
	//Player Player_1_;//[2]
	//Track_Block Track_Block_[3][20][20];

	//Track Track_3_;
	//Camera Camera_;

	Phys_point dots;
	map_grid map_grid_1;

	Global_input Input_;
	Camera Camera_;


	GLuint pose_1;

	GLuint background_img;
	Sprite background_sprite;
};

#endif // _GAME_LOOP_H