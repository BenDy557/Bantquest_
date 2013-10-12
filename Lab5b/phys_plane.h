#ifndef _PHYS_PLANE_H_
#define _PHYS_PLANE_H_

#include "vector2.h"
#include "Sprite.h"

class Phys_plane
{
public:
	Phys_plane();

	Sprite image;
	bool image_toggle;
private:
	vector2 position;
	vector2 velocity;

public:
	void Update();
	void Draw();
};

#endif