//
//  ParticleSystem.hpp
//  Stars
//
//  Created by Jose Deschamps on 3/6/17.
//
//


#include "ofMain.h"
#include "Particle.hpp"
class ParticleSystem
{
public:
    ParticleSystem(ofVec2f pos);
    ~ParticleSystem();
    
    void update(ofVec2f force);
    void draw();
    
    vector<Particle> myParticles;
    
    const int MAX_SIZE = 100;
    ofVec2f myPos;
   
};



