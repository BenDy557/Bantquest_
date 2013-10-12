#ifndef _MAP_GRID_H_
#define _MAP_GRID_H_

#include "map_tile.h"


class map_grid
{
public:
	map_grid();
	
	map_tile map_tiles[3][20][20];

	void set_position(vector2 pos);
protected:
	vector2 position;
};

#endif