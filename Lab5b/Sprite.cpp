#include "Sprite.h"
 
Sprite::Sprite()
{
	position.x=position.y=0;
	scale.x=scale.y=1;
	color.x=color.y=color.z=1;
	layer=0;
}
 
void Sprite::Draw()
{
	//Update();
	glPushMatrix();
	glTranslatef(position.x,position.y,0.1*layer);//TODO//something to do with layer?
	glColor3f(color.x,color.y,color.z);
	glScalef(scale.x,scale.y,1);
	

	//glCallList(Plane_1x);
	glBegin (GL_QUADS);
	//glNormal3f(-0.5, 1.0,-0.5);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-0.5, 0.5, 0.0);
	
	//glNormal3f(-0.5, 1.0, 0.5);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f( 0.5, 0.5, 0.0);
	
	//glNormal3f( 0.5, 1.0, 0.5);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f( 0.5,-0.5, 0.0);

	//glNormal3f( 0.5, 1.0f,-0.5);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-0.5,-0.5, 0.0);
	glEnd();//end drawing
	
	glEndList();

	glPopMatrix();
}
 
//void Sprite::LoadABitmap(LPSTR szFileName)
//{
//        
//}


void Sprite::Update() // stops object going outside of screen
{
	//position=temp_position;
}