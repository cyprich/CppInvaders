#pragma once
#include <raylib.h>

class Laser {
	private:
		Vector2 position;
		int speed;
		bool active;

	public:
		Laser(Vector2 position, int speed);
		void Update();
		void Draw();
		bool GetActive() const;
};