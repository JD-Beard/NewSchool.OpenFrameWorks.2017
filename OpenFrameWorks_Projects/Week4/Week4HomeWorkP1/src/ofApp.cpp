#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetBackgroundColor(255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {

	for (int i = 0; i <= 20; i++) {
		for (int j = 0; j <= 20; j++) {


			posX = ofMap(i, 0, 20, 0, ofGetWindowWidth()/2);
			posY = ofMap(j, 0, 20, 0, ofGetWindowHeight()/2);
			scale = ofMap(i, 0, 20, 10, 50);


			color1 = ofMap(j, 0, 20, 0, 255);
			color2 = ofMap(i, 100, 255, 0, 255);
			color3 = ofMap(i, 0, 200, 0, 255);
			distance = ofDist(mouseX, mouseY, i, j);
			
			ofFill(); 
			ofSetColor(ofRandom(color1+ distance), ofRandom(color2 + distance), ofRandom(color3));
			ofDrawRectangle(posX + distance, posY + distance, scale, scale);

		}
	}
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
