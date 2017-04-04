//
//  Bullet.cpp
//  Midterm_SpaceShooter
//
//  Created by Jose Deschamps on 3/30/17.
//
//

#include "Bullet.hpp"





void Bullet::setup(float x, float y){
    
    bullet_x = x;
    bullet_y = y;
    bulletLook.load("Bullet.png");
    
}

void Bullet::update(){

bullet_x+=bulletSpeed;
    
}

void Bullet::draw(){
    
    
    if (bullet_x>ofGetWindowWidth()) {
        remove=true;
    }
    else
        //ofColor(0,255,0);
        //ofDrawCircle(bullet_x, bullet_y, bulletSize);
    bulletLook.draw(bullet_x, bullet_y, 50,50);
    bullet_x+=bulletSpeed;
}


    



