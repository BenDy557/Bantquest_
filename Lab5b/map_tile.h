#ifndef _MAP_TILE_H_
#define _MAP_TILE_H_

#include "sprite.h"

#include "map_layouts.h"

class map_tile : public Sprite
{
public:
	map_tile();
	
	void init_terrain_type();

	int terrain_type;

protected:
	
};

#endif