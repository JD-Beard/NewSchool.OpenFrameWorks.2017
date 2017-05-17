//
//  Bullet.hpp
//  
//
//  Created by Jose Deschamps on 4/22/17.
//
//

#include "Entity.hpp"

class Bullet : public Entity {
public:
    Bullet(ofPoint size);

    
    virtual void update(float dt);
    virtual void draw();
    virtual void checkBounds();
    
    void initialize(ofPoint origin, ofPoint dir);
    bool maxDistanceReached();
    float getDistance();
    float fireDist;
    float lifeTime;
    ofPoint tmpOrigin;
};

