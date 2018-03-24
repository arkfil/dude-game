#pragma once
#include "Graphics.h"

class Dude
{
public:
	Dude();
	~Dude();

	int x;
	int y;

	static constexpr int width = 20;
	static constexpr int height = 20;

	void clampToScreen();

	void Draw(Graphics &gfx) const;
};

