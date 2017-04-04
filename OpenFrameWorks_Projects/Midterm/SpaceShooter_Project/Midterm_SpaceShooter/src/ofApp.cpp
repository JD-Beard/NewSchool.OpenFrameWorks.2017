#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    gravity = ofVec2f(-5.f, 0.f);
    
    backgroundMusic.load("Day.wav");
    Laser.load("Laser.wav");
    Blow.load("Explosion.wav");
    
    
    
    playerLook.load("Player.png"); //player img
    background.load("background.gif"); // background img
    
    //player Position
    xPos=45;
    yPos=ofGetWindowHeight()/2;
    moveUp=moveDown=moveLeft=moveRight=false;
    
    //player Speed for movement.
    playerSpeedX=0;
    playerSpeedY=0;
    maxSpeedX=4;
    maxSpeedY=6;
    
    curTime=0; //current time
    startTime=0; //starting time
    totalTime=1000; //time different 1000 = 1 sec
    backgroundMusic.play();
    
   
     //ofSetFrameRate(60);
   //ofEnableAlphaBlending();
   //ofDisableAlphaBlending();
//    gifloader.load("background.gif");
//    
//    startnewTime = ofGetElapsedTimeMillis();
    

}

//--------------------------------------------------------------
void ofApp::update(){
    
    for (int i = 0; i < playerBullet.size(); i++) {
        if (playerBullet[i].bullet_x) {
            for (int e = theEnemy.size()-1; e >= 0; e--) {
                if (ofDist(playerBullet[i].bullet_x,playerBullet[i].bullet_y, theEnemy[e].x, theEnemy[e].y) < (theEnemy[e].x / ofGetWidth() + playerBullet[i].bullet_x + ofGetWidth()/50) && ofDist(playerBullet[i].bullet_y,playerBullet[i].bullet_x, theEnemy[e].y, theEnemy[e].x) < (theEnemy[e].y / ofGetHeight() +playerBullet[i].bullet_x + ofGetHeight()/2))   {
                    theEnemy.erase(theEnemy.begin()+e);
                    playerBullet.erase(playerBullet.begin()+i);
                    Blow.play();
                    
                }
            }
        }
    }
    
    
    
    for (int i = 0; i <mySystem.size(); i++) {
        mySystem[i].update(gravity);
    }
 
//    
//    if (ofGetElapsedTimeMillis() - startnewTime >= gifDelay) {
//        index++;
//        if (index > gifloader.pages.size() - 1) {
//            index = 0;
//        }
//        startnewTime = ofGetElapsedTimeMillis();
//    }
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    background.draw(0,0, 1024,768);
    
    
//   ofImage img = gifloader.pages[index];
//   ofPixels pix = img.getPixels();
//   img.setFromPixels(pix);
//   img.draw(0,0,1024, 768);
    
  
    
    
    //drawing on the screen.
    
    
    for (int i = 0; i<playerBullet.size(); i++) {
        playerBullet[i].draw();
    }
    
    for (int i = 0; i<theEnemy.size(); i++) {
        theEnemy[i].draw();
        
    }
    
    for (int i = 0; i < mySystem.size(); i++) {
        mySystem[i].draw();
    }

    
    
    
    
    //spawning for the enemy on a timer.
    
    curTime=ofGetElapsedTimeMillis();
    if (curTime-startTime>totalTime) {
        Enemy m;
        m.setup(ofGetWindowWidth()+500, ofRandom(100, ofGetWindowHeight()-10));
        theEnemy.push_back(m);
        startTime=curTime;
        
    }
    
    //the player movement.
    
       
    if (moveUp) {        //moving up is negative along x-axis
        playerSpeedY+=(maxSpeedY-playerSpeedY)*0.03;
        yPos-=playerSpeedY;
        if (yPos<20) {
            yPos=20;
        }
    }
    
    if (moveDown) {       //moving down is positive along x-axis
        playerSpeedY+=(maxSpeedY-playerSpeedY)*0.03;
        yPos+=playerSpeedY;
        if (yPos>ofGetWindowHeight()+20) {
            yPos=ofGetWindowHeight()+20;
        }
    }
    
    if (moveLeft) {       //moving left is negative along y-axis
        playerSpeedX+=(maxSpeedX-playerSpeedX)*0.03;
        xPos-=playerSpeedX;
        if (xPos<0) {
            xPos=0;
        }
    }
    
    if (moveRight) {      //moving right is positive along y-axis
        playerSpeedX+=(maxSpeedX-playerSpeedX)*0.03;
        xPos+=playerSpeedX;
        ParticleSystem myParticleSystem(ofVec2f(xPos+40, yPos+60));
        mySystem.push_back(myParticleSystem);
        if (xPos>ofGetWindowWidth()) {
            xPos=ofGetWindowWidth();
            
           
        }
    }
    
    
    
    playerLook.draw(xPos,yPos,100,100);
    
  
    
    
    
    
    

}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
    if (key == OF_KEY_UP) {
        moveUp=true;
    }
    if (key == OF_KEY_DOWN) {
        moveDown=true;
    }
    if (key == OF_KEY_LEFT) {
        moveLeft=true;
    }
    if (key == OF_KEY_RIGHT) {
        moveRight=true;
    }
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
    if (key == OF_KEY_UP) {
        moveUp=false;
    }
    if (key == OF_KEY_DOWN) {
        moveDown=false;
    }
    if (key == OF_KEY_LEFT) {
        moveLeft=false;
    }
    if (key == OF_KEY_RIGHT) {
        moveRight=false;
    }
    if (key == ' ') {
        
        Bullet tempBullet;
        tempBullet.setup(xPos+40, yPos+25);
        playerBullet.push_back(tempBullet);
        Laser.play();
}
    
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
