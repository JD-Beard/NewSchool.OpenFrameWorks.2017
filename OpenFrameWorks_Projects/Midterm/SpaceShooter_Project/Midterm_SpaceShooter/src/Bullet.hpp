//
//  Bullet.hpp
//  Midterm_SpaceShooter
//
//  Created by Jose Deschamps on 3/30/17.
//
//


#include "ofMain.h"


class Bullet{
    
    
    
    
public:
    
    void setup(float x, float y);
    void update();
    void draw();
    
    
    
    float bulletSpeed=8;
    float bullet_x;
    float bullet_y;
    ofImage bulletLook;
    bool remove;
    
    
    
    
    
    
    
};
