#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	img.load("Eye.png");
	scale = 20;
	cols = floor(ofGetWindowWidth() / scale);
	rows = floor(ofGetWindowHeight() / scale);
	inc = 5;
	ofSetFrameRate(10);
}   
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){

	for (int y = 0; y < rows; y++) {

		for (int x = 0; x < cols; x++) {
			
				float color = ofMap(ofNoise(xOff, yOff), 0, 100, ofRandom(75), 100);
				float color1 = ofMap(ofNoise(xOff, yOff), 0, 20, 0, 255);
				float color2 = ofMap(ofNoise(xOff, yOff), 0, 100,ofRandom(75), 255);
				xOff += inc;
				ofSetColor(color, color1, color2);
				img.draw(x * scale-300, y * scale);

			}

			yOff += inc;
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
