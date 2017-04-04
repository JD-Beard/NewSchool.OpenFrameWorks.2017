//
//  Enemy.cpp
//  Midterm_SpaceShooter
//
//  Created by Jose Deschamps on 3/30/17.
//
//

#include "Enemy.hpp"





void Enemy::setup(float _x, float _y){
    
    xspeed=-3;
    x=_x;
    y=_y;
    alive=true;
    remove = false;
    enemyLook.loadImage("Enemy.png");
    
        
   
}

void Enemy::update(){
    
    
 
    
}

void Enemy::draw(){
    
    if(alive){
        x+=xspeed;
        enemyLook.draw(x - ofGetWindowWidth()/2, y - ofGetWindowHeight()/2, 100,100);
    
    
   
        
        

    } 
    
    
}



