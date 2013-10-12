#include "Phys_plane.h"

Phys_plane::Phys_plane()
{
	position.x = position.y = 0;
	velocity.x = velocity.y = 0;
	image_toggle=true;
}

void Phys_plane::Update()
{
	//TODO
	position = position + (velocity/60);//60 is equal to frames per second

	image.position = position;
	//image.Update(position);
}

void Phys_plane::Draw()
{
	image.Draw();
}