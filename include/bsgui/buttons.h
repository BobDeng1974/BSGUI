/*
** Bad Sector's OpenGL GUI
*/

#ifndef __BSGUI_BUTTONS_H_INCLUDED__
#define __BSGUI_BUTTONS_H_INCLUDED__

#include <string>

#include "bsgui/controls.h"



namespace BSGUI
{

struct Button : public Control
{
	std::string caption;
	class Image *bitmap;
	bool autoDeleteBitmap;
	bool pushed;
	bool highlighted;

	Button(Control *parent, Theme &t, int x1, int y1, int x2, int y2, char *caption, Image *bitmap=NULL);
	virtual ~Button();

	virtual void SetBitmap(Image *newBitmap, bool autoDelete);

	virtual void Render();

	virtual bool OnMouseDown(int x, int y, int b);
	virtual bool OnMouseUp(int x, int y, int b);
};

}

#endif
