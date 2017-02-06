#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(50, 200, 200);
	position = ofVec3f(ofGetWindowWidth() * 0.5, ofGetWindowHeight() * 0.5);
	velocity = ofVec3f(0,0,0);
	acceleration = ofVec3f(0,0,0);
	scale = 50;
	friction = 0.95;
	ofEnableDepthTest();
	ofSetVerticalSync(true);
	cam.setDistance(500);

}

//--------------------------------------------------------------
void ofApp::update(){

	position += velocity;


	if (position.x >= ofGetWindowWidth() || position.x <= 0) {

		velocity.x = velocity.x * -1;



	}

	if (position.y >= ofGetWindowHeight() || position.y <= 0) {

		velocity.y = velocity.y * -1;



	}

}

//--------------------------------------------------------------
void ofApp::draw(){

	cam.begin();

	ofDrawCone(position, scale, 70);

	cam.end();

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

	ofVec2f mousePos = ofVec2f(x, y);
	acceleration = mousePos - position;
	acceleration = acceleration.getNormalized();
	velocity += acceleration;

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
