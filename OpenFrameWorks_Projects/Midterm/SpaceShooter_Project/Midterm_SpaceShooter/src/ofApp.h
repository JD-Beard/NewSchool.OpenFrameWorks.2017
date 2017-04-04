#pragma once

#include "ofMain.h"
#include "Bullet.hpp"
#include "Enemy.hpp"
#include "ofxGif.h"
#include "ParticleSystem.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
      

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
    
    float xPos, yPos;
    bool moveUp, moveDown, moveRight, moveLeft;
    float playerSpeedX, playerSpeedY, maxSpeedX, maxSpeedY;
    int curTime, startTime, totalTime;
    vector<Bullet> playerBullet;
    vector<Enemy> theEnemy;
    ofImage playerLook;
    ofImage background;
    ofVideoPlayer BG;
    ofSoundPlayer backgroundMusic;
    ofSoundPlayer Laser;
    ofSoundPlayer Blow;
    
    Enemy myEnemy;
    Bullet myBullet;
    
    
    vector<ParticleSystem> mySystem;
    const int MAX_SIZE = 100;
    ofVec2f gravity;
    
    //Testing to see the gif could loaded.
    
//    ofxGIF::fiGifLoader gifloader;
//    int index = 0;
//    float gifDelay = 100;
//    float startnewTime;
//    
    
    
		
};
