//
//  Game.hpp
//  
//
//  Created by Jose Deschamps on 4/22/17.
//
//

#pragma once

#include "ofMain.h"
#include "Ship.hpp"
#include "Asteroid.hpp"

class Game : public ofBaseApp {
    float score;
    Ship *ship;
    float deltaTime;
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed(int key);
    void keyReleased(int key);
    
    void handleKey(int key, bool value);
    void addAsteroids(int num);
    void normalizePoint(ofPoint &point);
    void checkCollisions();
    void splitAsteroid(int which);
    
   vector<Asteroid*> asteroids;
};

