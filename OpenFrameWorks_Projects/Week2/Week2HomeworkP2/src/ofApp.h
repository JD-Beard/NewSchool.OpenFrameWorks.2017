#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
		void SpawnStuffTop(int key);
		void SpawnStuffBottom(int key);

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		

		ofVec2f position;
		ofVec2f position2;
		ofVec2f velocity;
		ofVec2f acceleration;
		ofVec2f startSpeed;

		float friction;
		float time;
		float gravity;
		float Scale;

		
};
