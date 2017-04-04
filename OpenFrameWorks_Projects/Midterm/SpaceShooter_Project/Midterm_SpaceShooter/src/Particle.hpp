//
//  Particle.hpp
//  Midterm_SpaceShooter
//
//  Created by Jose Deschamps on 4/3/17.
//
//

#include "ofMain.h"
class Particle
{
public:
    Particle(ofVec2f pos);
    ~Particle();
    
    void update(float changeInVel);
    void draw();
    void applyForce(ofVec2f force);
    
    ofVec2f myPos, myVel, myAccel;
    float myLifeSpan;
    
    const float INTIAL_LIFE_SPAN = 500.0f;
    
    
    
};

