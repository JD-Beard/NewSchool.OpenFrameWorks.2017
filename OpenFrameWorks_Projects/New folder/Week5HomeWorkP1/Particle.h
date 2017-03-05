#pragma once
#include "ofMain.h"
class Particle
{
public:
	Particle();
	~Particle();

	void update();
	void draw();
	void setInitialCondition(float px, float py, float vx, float vy);
	void addForce(float x, float y);
	void addDampingForce();
	void resetForce();
	
	ofVec2f pos;
	ofVec2f vel;
	ofVec2f frc;
	float damping;
};

