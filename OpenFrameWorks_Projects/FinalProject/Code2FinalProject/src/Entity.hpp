//
//  Entity.hpp
//  
//
//  Created by Jose Deschamps on 4/22/17.
//
//
#pragma once

#include "ofMain.h"

class Entity {
    
public:
    Entity();
    ~Entity();
    
    ofPoint position;
    ofPoint direction;
    ofPoint size;
    
    float angle;
    float speed;
    
    virtual void update(float dt);
    virtual void draw();
    virtual bool checkCollision(Entity *sprite);
    virtual void checkBounds();
    virtual void rotate(float value);
    
};
