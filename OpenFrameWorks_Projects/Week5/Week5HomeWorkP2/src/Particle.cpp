#include "..\Particle.h"



Particle::Particle(ofVec2f pos)
{
	myPos = pos;
	myVel = ofVec2f(ofRandom(-10.f, 10.f), ofRandom(-10.f, 10.f));
	myLifeSpan = INTIAL_LIFE_SPAN;

}


Particle::~Particle()
{
}

void Particle::update(float changeInVel) {

	myVel += myAccel;
	myPos += myVel * changeInVel;

	if (myLifeSpan > 0) {
		myLifeSpan -= 1.f;
	}

}

void Particle::draw() {


	if (myLifeSpan > 90) {
		ofSetColor(0, 200, 255);
	}
	else {
		ofSetColor(ofRandom(100), ofRandom(255), ofRandom(100));
	}
	float size = ofMap(myLifeSpan, 0, 200, 0, 2);
	
	ofDrawBox(myPos, size);
}


void Particle::applyForce(ofVec2f force) {
	myAccel = force;
}
