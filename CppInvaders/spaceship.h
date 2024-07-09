#pragma once
#include <raylib.h>
#include <vector>
#include "laser.h"

class Spaceship {
	private:
		Texture2D image;
		Vector2 position;
		double lastFireTime;

	public:
		Spaceship();
		~Spaceship();
		void Draw();
		void MoveLeft();
		void MoveRight();
		void Shoot();
		std::vector<Laser> lasers;  // TODO public atribut
};
