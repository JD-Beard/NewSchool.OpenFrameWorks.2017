#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    image.load("Earth.jpg");
    image.resize(150,150);
    displacementScale = 0.75;
    
    
    
    
    mesh.setMode(OF_PRIMITIVE_POINTS);
    float intensityThreshold = 115.0;
    int w = image.getWidth();
    int h = image.getHeight();
    ofSetFrameRate(60);
    for (int x=0; x<w; ++x) {
        for (int y=0; y<h; ++y) {
            ofColor c = image.getColor(x, y);
            float intensity = c.getLightness();
            if (intensity >= intensityThreshold) {
                float saturation = c.getBrightness();
                float z = ofMap(saturation, 0, 255, -100, 100);
                ofVec3f pos(x*5, y*4, z);
                mesh.addVertex(pos);
                mesh.addColor(c);
               
                
                
                offsets.push_back(ofVec3f(ofRandom(0,100000), ofRandom(0,100000), ofRandom(0,100000)));
            }
        }
    }
    
    
    
    mesh.setMode(OF_PRIMITIVE_LINES);
    mesh.enableIndices();
    float connectionDistance = 50;
    int numVerts = mesh.getNumVertices();
    for (int a=0; a<numVerts; ++a) {
        ofVec3f verta = mesh.getVertex(a);
        for (int b=a+0.1; b<numVerts; ++b) {
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
    
    
    
    ofColor centerColor = ofColor(255, 255, 255);
    ofColor edgeColor(255, 105, 180);
    ofBackgroundGradient(centerColor, edgeColor, OF_GRADIENT_CIRCULAR);
    ofPushMatrix();
    
    ofRotate(ofGetFrameNum()* 1.0,1,1,0);
    //displacementScale = ofMap(displacementScale, 0.1, 1.5, 0.3,  1.0);
    mesh.draw();
    ofPopMatrix();



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
