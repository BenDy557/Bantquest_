#include "phys_point.h"

Phys_point::Phys_point()
{
	position.x = position.y = 0;
	velocity.x = velocity.y = 0;
	image_toggle=true;
}

Phys_point::Phys_point(int x,int y,int z,float scale,int xvel,int yvel)
{
	
	image.color.x=x;
	image.color.y=y;
	image.color.z=z;
	image.scale.x=image.scale.y=scale;
	velocity.x=xvel;
	velocity.y=yvel;
	
	image_toggle=true;
}

void Phys_point::Update()
{
	//TODO
	position = position + (velocity/60);//60 is equal to frames per second

	image.position = position;
	//image.Update(position);
}

void Phys_point::Draw()
{
	image.Draw();
}