//
//  Asteroid.hpp
//  
//
//  Created by Jose Deschamps on 4/22/17.
//
//
#pragma once

#include "Entity.hpp"

class Asteroid : public Entity {
public:
    Asteroid();
    ~Asteroid();
    
    virtual void initialize(ofPoint size, float speed, ofPoint position, ofPoint direction);
    virtual void draw() const;
    virtual void update(float dt);
    void checkIfBreakable();
    bool isBreakable;
    float rotationSpeed;
    vector<ofPoint> vertices;
};


