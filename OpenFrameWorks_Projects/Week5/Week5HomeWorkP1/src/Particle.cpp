#include "..\Particle.h"



Particle::Particle()
{

	setInitialCondition(0, 0, 0, 0);
	damping = 0.08f;
}


Particle::~Particle()
{
}

void Particle::update() {

	vel = vel + frc;
	pos = pos + vel;

}

void Particle::draw() {
	ofCircle(pos.x, pos.y, 3);

}

void Particle::addForce(float x, float y) {

	frc.x = frc.x + x;
	frc.y = frc.y + y;

}

void Particle::resetForce() {


	frc.set(0, 0);
}

void Particle::addDampingForce() {

	frc.x = frc.x - vel.x * damping;
	frc.y = frc.y - vel.y * damping;

}

void Particle::setInitialCondition(float px, float py, float vx, float vy) {


	pos.set(px, py);
	vel.set(vx, vy);

}


