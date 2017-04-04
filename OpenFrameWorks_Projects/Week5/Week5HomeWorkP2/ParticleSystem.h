#pragma once
#include "ofMain.h"
#include "..\Particle.h"
class ParticleSystem
{
public:
	ParticleSystem(ofVec2f pos);
	~ParticleSystem();

	void update(ofVec2f force);
	void draw();

	vector<Particle> myParticles;

	const int MAX_SIZE = 100;
	ofVec2f myPos;
};

