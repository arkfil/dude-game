#pragma once
#include "Dude.h"
#include "Graphics.h"


class Poo
{
public:
	Poo();
	~Poo();

	void Update();
	void Draw(Graphics &gfx) const;
	void ProcessConsumption(const Dude &dude);


// function
	int x;
	int y;

	int vx;
	int vy;

	static constexpr int width = 24;
	static constexpr int height = 24;

	int isEaten = false;





};

