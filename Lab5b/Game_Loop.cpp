#include "Game_Loop.h"

#include "Globals.h"

Game_Loop::Game_Loop()
{

	Init();
}

void Game_Loop::Run()
{
	Update();
	Render();
}

void Game_Loop::Init()
{
	//int S_WIDTH	 =	800;		//client area resolution
	//int S_HEIGHT =	600;

	CreateGLTexture("Pose_0.tga",pose_1);
	
	CreateGLTexture("background_0.tga",background_img);
	
	
	
	background_sprite.layer=1;
	background_sprite.scale=5;
	

	
	dots.image.layer=2;

	dots.image.scale.x=dots.image.scale.y=0.2;
	dots.image.color.x=rand()%256;
	dots.image.color.y=rand()%256;
	dots.image.color.z=rand()%256;
	dots.velocity.x=rand()%10-5;
	dots.velocity.y=rand()%10-5;
}

void Game_Loop::Update()
{
	//Camera_.cam_control_update(Input_,S_HEIGHT,S_WIDTH);
	Camera_.cam_control_update(Input_,GLOBAL_S_WIDTH,GLOBAL_S_HEIGHT,GLOBAL_S_XPOS,GLOBAL_S_YPOS);

	Camera_.cam_rot_update();
	Camera_.cam_move_update();
	Camera_.camera_update();
	//Camera_.update(Input_,S_HEIGHT,S_WIDTH);
			
				
	if (dots.position.x < -1 && dots.velocity.x < 0)
	{
		dots.velocity.x = -dots.velocity.x;
	}
	if (dots.position.y > 1 && dots.velocity.y > 0)
	{
		dots.velocity.y = -dots.velocity.y;
	};
	if (dots.position.x > 1 && dots.velocity.x > 0)
	{
		dots.velocity.x = -dots.velocity.x;
	}
	if (dots.position.y < -1 && dots.velocity.y < 0)
	{
		dots.velocity.y = -dots.velocity.y;
	}

	dots.Update();
}

void Game_Loop::Render()
{
	int i=0;

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);// Clear The Screen And The Depth Buffer
	glLoadIdentity();// load Identity Matrix

	////-------
	////CAMERA
	////-------

	//set camera looking down the -z axis,  6 units away from the center
	//gluLookAt(0, 0, 6,     0, 0, 0,     0, 1, 0); //Where we are, What we look at, and which way is up

	gluLookAt(Camera_.get_x(),Camera_.get_y(),Camera_.get_z(),//Where we are
			  Camera_.get_x_forward()+Camera_.get_x(),Camera_.get_y_forward()+Camera_.get_y(),Camera_.get_z_forward()+Camera_.get_z(),//What we look at
			  Camera_.get_x_up(),Camera_.get_y_up(),Camera_.get_z_up());// and which way is up 
	////----------
	////CAMERA END
	////----------
	//background_sprite
	
	glBindTexture(GL_TEXTURE_2D, pose_1);
	
	dots.Draw();

	for(int map_y=0;map_y<20;map_y++)//TODO//magic number
	{
		for(int map_x=0;map_x<20;map_x++)//TODO//magic number
		{
			for(int map_z=0;map_z<3;map_z++)//TODO//magic number
			{
				if(map_grid_1.map_tiles[map_z][map_x][map_y].terrain_type!=0)
				{
					map_grid_1.map_tiles[map_z][map_x][map_y].Draw();
				}
			}
		}
	}

	glBindTexture(GL_TEXTURE_2D, background_img);
	background_sprite.Draw();
	

	


	
}