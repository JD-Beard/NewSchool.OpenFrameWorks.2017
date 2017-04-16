#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    soundPlayer.load("Killed.mp3");
    soundPlayer.play();
    soundSpeed = 1.0;
    image.load("Me.jpg");
    image.resize(200,200);
    displacementScale = 0.75;
    
    
    
    
    mesh.setMode(OF_PRIMITIVE_LINE_STRIP);
    float intensityThreshold = 150.0;
    int w = image.getWidth();
    int h = image.getHeight();
    ofSetFrameRate(60);
    for (int x=0; x<w; ++x) {
        for (int y=0; y<h; ++y) {
            ofColor c = image.getColor(x, y);
            float intensity = c.getLightness();
            if (intensity >= intensityThreshold) {
                float saturation = c.getSaturation();
                float z = ofMap(saturation, 0, 255, -100, 100);
                ofVec3f pos(x*4, y*4, z);
                mesh.addVertex(pos);
                mesh.addColor(c);
                
           
                offsets.push_back(ofVec3f(ofRandom(0,100000), ofRandom(0,100000), ofRandom(0,100000)));
                }
            }
        }
    
    
    
    mesh.setMode(OF_PRIMITIVE_POINTS);
    mesh.enableIndices();
    float connectionDistance = 50;
    int numVerts = mesh.getNumVertices();
    for (int a=0; a<numVerts; ++a) {
        ofVec3f verta = mesh.getVertex(a);
        for (int b=a+1; b<numVerts; ++b) {
            ofVec3f vertb = mesh.getVertex(b);
            float distance = verta.distance(vertb);
            if (distance <= connectionDistance) {
                mesh.addIndex(a);
                mesh.addIndex(b);
                
                
              
            }
        }
    }
    
    

}


    



//--------------------------------------------------------------
void ofApp::update(){
    
    ofSoundUpdate();
    
    int numVerts = mesh.getNumVertices();
    for (int i=0; i<numVerts; ++i) {
        ofVec3f vert = mesh.getVertex(i);
        
        float time = ofGetElapsedTimef();
        float timeScale = 5.0;
        ofVec3f timeOffsets = offsets[i];
      
        
        vert.x += (ofSignedNoise(time*timeScale+timeOffsets.x)) * displacementScale;
        vert.y += (ofSignedNoise(time*timeScale+timeOffsets.y)) * displacementScale;
        vert.z += (ofSignedNoise(time*timeScale+timeOffsets.z)) * displacementScale;
        mesh.setVertex(i, vert);
        
       
    }
    
    
   
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    displacementScale = displacementScale + 0.1;
   
    ofColor centerColor = ofColor(85, 78, 68);
    ofColor edgeColor(0, 0, 0);
    ofBackgroundGradient(centerColor, edgeColor, OF_GRADIENT_CIRCULAR);
    mesh.draw();
    
    
    
  
    
    
    
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if (key == OF_KEY_LEFT) {
        soundSpeed = soundSpeed - 0.01;
        soundPlayer.setSpeed(soundSpeed);
        
    }
    
    
    if (key == OF_KEY_RIGHT){
        soundSpeed = soundSpeed + 0.01;
        soundPlayer.setSpeed(soundSpeed);
    }

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
