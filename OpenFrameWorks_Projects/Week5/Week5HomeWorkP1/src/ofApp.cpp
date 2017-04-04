#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup() {

	ofSetVerticalSync(true);
	ofSetFrameRate(60);


	for (int i = 0; i < 1000; i++) {
		Particle myParticle;
		float vx = ofRandom(-4, 4);
		float vy = ofRandom(-4, 4);
		myParticle.setInitialCondition(300, 300, vx, vy);
	
		myParticle.damping = ofRandom(0.01, 0.05);
		particles.push_back(myParticle);
	}

}

//--------------------------------------------------------------
void ofApp::update(){

	for (int i = 0; i < particles.size(); i++) {
		particles[i].resetForce();
		particles[i].addForce(0,0.04);  //gravity for the particle
		particles[i].addDampingForce();
		particles[i].update();
	}

}

//--------------------------------------------------------------
void ofApp::draw(){

	ofSetColor(0x000000);

	for (int i = 0; i < particles.size(); i++) {
		particles[i].draw();
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
	for (int i = 0; i < particles.size(); i++) {
		float vx = ofRandom(-4, 4);
		float vy = ofRandom(-4, 4);
		particles[i].setInitialCondition(mouseX, mouseY, vx, vy);

	}
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