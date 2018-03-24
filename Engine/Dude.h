#pragma once
#include "Graphics.h"

class Dude
{
public:
	Dude();
	Dude(const int p_x, const int p_y);

	~Dude();
	void ClampToScreen();
	void Draw(Graphics &gfx) const;
	void Update(const bool up, const bool down, const bool left, const bool right);

	friend class Poo;
private:
	int x;
	int y;
	static constexpr int width = 20;
	static constexpr int height = 20;
	static constexpr int speed = 3;


};

