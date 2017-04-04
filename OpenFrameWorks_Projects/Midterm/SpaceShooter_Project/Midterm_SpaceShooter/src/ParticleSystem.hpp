//
//  ParticleSystem.hpp
//  Midterm_SpaceShooter
//
//  Created by Jose Deschamps on 4/3/17.
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
    
    const int MAX_SIZE = 10;
    ofVec2f myPos;
    
};

