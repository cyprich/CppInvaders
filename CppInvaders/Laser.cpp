#include "laser.h"

Laser::Laser(Vector2 position, int speed)
{
	this->position = position;
	this->speed = speed;
	this->active = true;
}

void Laser::Draw() {
	if (active) {
		DrawRectangle(position.x, position.y, 4, 15, {243, 216, 63, 255});
	}
}

void Laser::Update() {
	position.y += speed;

	if (active) {
		if (position.y < 0 || position.y > GetScreenHeight()) {
			active = false;
		}
	}
}

bool Laser::GetActive() const {
	return active;
}

