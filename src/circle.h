#pragma once

#include "ofMain.h"

class mountain {
    
public:
    
    void setup();
    void update();
    void draw();
    
    
    //variables for making the mountains
    ofPoint posR;
    float posLX;
    float posLY;
    ofPoint posL;
    ofPoint peak;
    
    float horizon;
    
    float mountainWidth;
    float mountainHeight;
    
    ofColor color;
//    
//    ofPoint pos;
//    ofPoint vel;
//    
//    float radius;
//    ofColor color;
    
    
    
};
