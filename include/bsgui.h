/*
** Bad Sector's OpenGL GUI
*/

#ifndef __BSGUI_BSGUI_H_INCLUDED__
#define __BSGUI_BSGUI_H_INCLUDED__

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#ifdef WIN32
#include <windows.h>
#ifdef DELETE
#undef DELETE
#endif
#ifdef MessageBox
#undef MessageBox
#endif
#endif

#include <BSGFX.h>

typedef unsigned int	uint;


#include <bsgui/actions.h>
#include <bsgui/controls.h>
#include <bsgui/screen.h>
#include <bsgui/windows.h>
#include <bsgui/labels.h>
#include <bsgui/buttons.h>
#include <bsgui/checkboxes.h>
#include <bsgui/sliders.h>
#include <bsgui/scrollboxes.h>
#include <bsgui/listboxes.h>
#include <bsgui/inputboxes.h>
#include <bsgui/filebrowser.h>
#include <bsgui/renderers.h>
#include <bsgui/modelviews.h>
#include <bsgui/messageboxes.h>
//#include <bsgui/menus.h>
#include <bsgui/progressbars.h>
#include <bsgui/draw.h>
#include <bsgui/passwordbox.h>
#include <bsgui/picture.h>

#include <SDL.h>

namespace BSGUI
{

void Render();
void Tick();
bool HandleSDLEvent(SDL_Event *ev);

Theme &GetDefaultTheme();
void SetDefaultTheme(Theme &theme);

}

#endif
