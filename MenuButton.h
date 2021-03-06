#ifndef MENUBUTTON_H
#define MENUBUTTON_H

#include "GameObject.h"


class MenuButton : public GameObject
{
public:
	enum button_state
	{
		MOUSE_OUT = 0,
		MOUSE_OVER = 1,
		CLICKED = 2
	};


	MenuButton(const LoaderParams* pParams, void(*callback)());
	void load(const LoaderParams * pParams);
	~MenuButton();
	virtual void draw();
	virtual void update();
	virtual void clean();

private:
	void(*m_callback)();
	bool m_bR;
	const LoaderParams * Params;

};

#endif MENUBUTTON_H