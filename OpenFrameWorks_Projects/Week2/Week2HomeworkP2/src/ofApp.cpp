#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	ofSetBackgroundColor(255);
	position = ofVec2f(512, 384);
	position2 = ofVec2f(512, 384);
	startSpeed = ofVec2f(0, 0);
	acceleration = ofVec2f(0, gravity);
	velocity = ofVec2f(.1, -.5);
	Scale = 100;
	gravity = 9.8;


}

//--------------------------------------------------------------
void ofApp::update(){

	time = ofGetElapsedTimef();
	velocity = startSpeed + acceleration * time;
	position += velocity;

	if (position.y >= ofGetWindowHeight() - Scale) {
		
		position.y = ofGetWindowHeight() - 1 - Scale;
		startSpeed.y = startSpeed.y * -1 * friction;
		startSpeed.x *= friction;
		//position.y++;
		ofResetElapsedTimeCounter();
		


	}



}

//--------------------------------------------------------------
void ofApp::draw(){
	//position.y++;
	//position.x++;


	
	for (int i = 0; i < 100; i++) {

		
		SpawnStuffTop(i);
		SpawnStuffBottom(i);
		

	}


	position.y += 40;
	position2.y -= 40;
	

}


void ofApp::SpawnStuffTop(int key) {
	
	for (int i = 0; i < 100; i++) {


		
		ofSetColor(255, 0, 0, 100);
		ofDrawBox(position, Scale);
		position = ofVec2f(ofRandom(1, 1024), 0);

	}

	


	
	
}

void ofApp::SpawnStuffBottom(int key) {

	for (int i = 0; i < 100; i++) {



		ofSetColor(255, 0, 0, 100);
		ofDrawBox(position2, Scale);
		position2 = ofVec2f(ofRandom(1, 1024), 768);

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
