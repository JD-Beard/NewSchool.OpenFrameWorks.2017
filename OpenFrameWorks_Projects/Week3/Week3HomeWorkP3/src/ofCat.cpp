#include "..\ofCat.h"



ofCat::ofCat()
{
}


ofCat::~ofCat()
{
}

void ofCat::setup() {
	image.load("Cat.png");
	ofSetVerticalSync(true);

	ofBackground(0, 0, 0);

	ofSetCircleResolution(100);

}
void ofCat::draw() {

	xPos = ofGetWidth() / 2;
	yPos = ofGetHeight() / 2;
	x2Pos = ofGetWidth() / 2;
	y2Pos = ofGetHeight() / 2;

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			radius = 50 + i * 20;
			angle = ofGetElapsedTimef() * (.5 + i / 4.0);
			float x = xPos + radius * cos(angle);
			float y = yPos + radius * -sin(angle);
			radius2 = 50 + i * 20;
			angle2 = ofGetElapsedTimef() * (.5 - j / 4.0);
			float x2 = x2Pos + radius * cos(angle2);
			float y2 = y2Pos + radius * -sin(angle2);

			ofSetRectMode(OF_RECTMODE_CENTER);
			ofSetColor(ofRandom(255), 255, ofRandom(255));
			image.draw(y, x - 200, 50, 50);
			image.draw(y2, x2 - 200, 50, 50);

		}
	}

}
