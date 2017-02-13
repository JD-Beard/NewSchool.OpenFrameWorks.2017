#pragma once
#include "ofMain.h"
class ofCat
{
public:
	ofCat();
	~ofCat();

	void setup();
	void draw();

	float xPos, x2Pos;
	float yPos, y2Pos;
	float radius, radius2;
	float angle, angle2;
	ofImage image;
};

