//
//  Enemy.hpp
//  Midterm_SpaceShooter
//
//  Created by Jose Deschamps on 3/30/17.
//
//

#include "ofMain.h"



class Enemy{
    
    
public:
    
   
    void setup(float _x, float _y);
    void update();
    void draw();
    float x;
    float y;
    float xspeed;
    bool alive,remove;
    ofImage enemyLook;
   
    
    
    
    
    
};
