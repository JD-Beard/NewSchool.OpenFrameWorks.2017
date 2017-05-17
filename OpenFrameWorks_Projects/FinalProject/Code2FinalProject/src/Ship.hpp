//
//  Ship.hpp
//  
//
//  Created by Jose Deschamps on 4/22/17.
//
//
#pragma once

#include "Entity.hpp"
#include "Bullet.hpp"

class Ship : public Entity {
public:
    Ship();
    
    
    virtual void update(float dt);
    virtual void draw();
    virtual void checkBounds();
    virtual void rotate(float value);
    virtual void setThrust(float value);
    virtual void reinitialize();
    
    void drawBullets() const;
    void createBullet();
    void fireBullet(float dt);
    
    vector<Bullet*> bullets;
    ofPoint bulletDirection;
    int bulletCount;
    
    bool turnLeft, turnRight, thrust, backthrust, isFiring;
};
