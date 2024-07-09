#include "spaceship.h"
#include "laser.h"
#include <vector>

Spaceship::Spaceship()
{
	image = LoadTexture("graphics/spaceship.png");
	position.x = (GetScreenWidth() - image.width) / 2;
	position.y = GetScreenHeight() - image.height - 50;
	std::vector<Laser> lasers;
	lastFireTime = 0.0;
}

Spaceship::~Spaceship() {
	UnloadTexture(image);
}

void Spaceship::Draw() {
	DrawTextureV(image, position, WHITE);
}

void Spaceship::MoveLeft() {
	position.x -= 7;

	if (position.x < 0) {
		position.x = 0;
	}	
}

void Spaceship::MoveRight() {
	position.x += 7;

	if ((position.x + image.width) >= GetScreenWidth()) {
		position.x = (GetScreenWidth() - image.width);
	}
}

void Spaceship::Shoot() {
	if (GetTime() - lastFireTime >= 0.35) {
		lasers.push_back(Laser({position.x + image.width / 2 - 2, position.y}, -6));
		lastFireTime = GetTime();
	}
}
