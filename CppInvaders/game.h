#pragma once
#include "spaceship.h"

class Game {
	private:
		Spaceship spaceship;

	public:
		Game();
		~Game();
		void Draw();
		void Update();
		void HandleInput();
};