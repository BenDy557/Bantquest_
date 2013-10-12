#include "hitbox.h"
 
Hitbox::Hitbox()
{
	/*x_frame=0; 
	y_frame=0;*/
	scale.x=0.1;
	scale.y=0.1;

	color.x=1;
	color.y=color.z=0;
}

void Hitbox::move_update()
{
	//velocity=(destination-position)/2;
}
 
void Hitbox::set_destination(vector2 temp_destination)
{
	//destination(vector2) set to temp_destination(vector2) being passed in
	destination=temp_destination;
}