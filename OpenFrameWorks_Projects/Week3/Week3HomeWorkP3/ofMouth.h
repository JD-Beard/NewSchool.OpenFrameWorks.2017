#pragma once
#include"ofMain.h"
class ofMouth
{
public:
	ofMouth();
	~ofMouth();


	void setup();
	void update();
	void draw();
	vector < ofPoint > points;
	ofImage image;
	float xPos, yPos, angle, radius;
	float x, y;
};

