#include "..\ofMouth.h"



ofMouth::ofMouth()
{
}


ofMouth::~ofMouth()
{
}

void ofMouth::setup() {
	ofSetVerticalSync(true);
	ofBackground(0, 0, 0);
	ofSetCircleResolution(100);
	image.load("Mouth.png");
	image.resize(100, 100);
	radius = 50;

}

void ofMouth::update() {

	radius = radius + 0.1;

}

void ofMouth::draw() {

	xPos = 800;
	yPos = 300;
	angle = ofGetElapsedTimef()*1.0;

	x = xPos + radius * cos(angle * 3.4);
	y = yPos + radius * -sin(angle * 4.7);

	ofPoint temp;
	temp.x = x;
	temp.y = y;
	points.push_back(temp);
	if (points.size() > 2000) {
		points.erase(points.begin());
	}



	ofSetColor(255, 0, 127);
	image.draw(x, y, 10);

	ofSetColor(255, 255, 255);
	ofBeginShape();
	for (int i = 0; i < points.size(); i++) {
		ofVertex(points[i].x, points[i].y);
	}
	ofEndShape();


}
