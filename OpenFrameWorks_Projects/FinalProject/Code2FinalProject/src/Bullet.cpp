//
//  Bullet.cpp
//  
//
//  Created by Jose Deschamps on 4/22/17.
//
//

#include "Bullet.hpp"

Bullet::Bullet(ofPoint size) {
    this->size = size;
}



void Bullet::draw() {
    ofPushStyle();
    ofPushMatrix();
    
    ofSetColor(255, 153, 51, lifeTime);
    ofRect(position.x, position.y, size.x, size.y);
    ofFill();
    
    ofPopMatrix();
    ofPopStyle();
}

void Bullet::initialize(ofPoint origin, ofPoint dir) {
    
    position.x = origin.x;
    position.y = origin.y;
    direction.x = -dir.x;
    direction.y = -dir.y;
    
    tmpOrigin = origin;
}

bool Bullet::maxDistanceReached() {
    return lifeTime <= 0;
}

float Bullet::getDistance() {
    return ofDist(tmpOrigin.x, tmpOrigin.y, position.x, position.y);
}

void Bullet::update(float dt) {
    position += direction * speed * dt;
    lifeTime -= 0.5;
    checkBounds();
}

void Bullet::checkBounds() {
    if (position.x > (float) ofGetWidth()) {
        position.x = 0.0;
    } else if (position.x + size.x < 0) {
        position.x = ofGetWidth();
    }
    if (position.y > (float) ofGetHeight()) {
        position.y = 0.0;
    } else if (position.y + size.y < 0) {
        position.y = ofGetHeight();
    }
}
