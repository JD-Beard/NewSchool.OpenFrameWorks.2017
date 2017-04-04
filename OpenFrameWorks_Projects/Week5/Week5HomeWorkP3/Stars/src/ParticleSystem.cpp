//
//  ParticleSystem.cpp
//  Stars
//
//  Created by Jose Deschamps on 3/6/17.
//
//

#include "ParticleSystem.hpp"






ParticleSystem::ParticleSystem(ofVec2f pos)
{
    myPos = pos;
    
}


ParticleSystem::~ParticleSystem()
{
}

void ParticleSystem::update(ofVec2f force) {
    
    if (myParticles.size() < MAX_SIZE) {
        Particle myParticle(myPos);
        myParticles.push_back(myParticle);
    }
    for (int i = 0; i <myParticles.size(); i++) {
        myParticles[i].applyForce(force);
        float distance = (myParticles[i].myPos - myPos).length();
        float changeInVel = ofMap(distance, 0, 200, 6, 0);
        
        myParticles[i].update(changeInVel);
    }
    
}




void ParticleSystem::draw() {
    for (int i = 0; i < myParticles.size(); i++) {
        myParticles[i].draw();
    }
    
}
