#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	position = ofVec2f(100, 200);
	initialVel = ofVec2f(0, 0);
	gravity = 9.8;
	acceleration = ofVec2f(.2,0);
	velocity = ofVec2f(.1,0);
	size = 50;
	friction = 0.9;
	ofSetBackgroundColor(50, 175, 200);
	r = 255;
	g = 0;
	b = 0;
	colorRange = 100;
}

//--------------------------------------------------------------
void ofApp::update(){
	time = ofGetElapsedTimef();
	velocity = initialVel + acceleration * time;
	position += velocity;


	if (position.x >= ofGetWindowWidth()) {

		position.x = 0;
		size+=20;
		colorRange += 20;
		g += 20;
		r -= 10;
		b += 5;
		ofResetElapsedTimeCounter();


	}
}

//--------------------------------------------------------------
void ofApp::draw(){

	//ofSetBackgroundAuto(true);
	ofSetColor(r, g, b, colorRange);
	ofDrawRectangle(position, size,size);

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
