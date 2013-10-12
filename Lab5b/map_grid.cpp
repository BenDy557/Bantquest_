#include "map_grid.h"
 
map_grid::map_grid()
{
	position.x=position.y=0;

	for(int map_y=0;map_y<20;map_y++)//TODO//magic number
	{
		for(int map_x=0;map_x<20;map_x++)//TODO//magic number
		{
			for(int map_z=0;map_z<3;map_z++)//TODO//magic number
			{
				map_tiles[map_z][map_x][map_y].position.x=1.0f*map_x;
				map_tiles[map_z][map_x][map_y].position.y=1.0f*map_y;
				
				map_tiles[map_z][map_x][map_y].layer=map_z*2;
				map_tiles[map_z][map_x][map_y].terrain_type=map_layout_1[map_z][map_x][map_y];
			
				map_tiles[map_z][map_x][map_y].init_terrain_type();
			}
			
		}
	}
}

void map_grid::set_position(vector2 pos)
{

}