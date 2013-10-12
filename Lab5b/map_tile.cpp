#include "map_tile.h"
 
map_tile::map_tile()
{
	position.x=position.y=0;
}

void map_tile::init_terrain_type()
{
	if(terrain_type==0)//void
	{
		color.x=0.0f;
		color.y=0.0f;
		color.z=0.0f;
	}
	else if(terrain_type==1)//dirt
	{
		color.x=0.6f;
		color.y=0.5f;
		color.z=0.5f;
	}
	else if(terrain_type==2)//water
	{
		color.x=0.2f;
		color.y=0.2f;
		color.z=0.75f;
	}
	else
	{
		color.x=0.75f;
		color.y=0.5f;
		color.z=0.75f;
	}
}
