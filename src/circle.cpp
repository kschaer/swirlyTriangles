
#define NUM 10
#include "circle.h"

//---------------------------------------------------------------
void mountain::setup(){
    //ofNoFill();
    ofSetCircleResolution(50);
//    pos.set( ofRandom(0, ofGetWidth()),
//            ofRandom(0, ofGetHeight()));
//    radius = ofRandom(1,10);
//    color.set(ofRandom(255),
//              ofRandom(255),
//              ofRandom(255));
//    
//    vel.set(ofRandom(-10,10), ofRandom(-10,10));
//    
//
    for (int i = 0; i<20; i++){
        for (int j = 0; j <20; j++){
            
        
        mountainWidth = 2;
        horizon = 100;
        posLX = i*20;
        posLY = horizon+j*(ofGetHeight()/20);
        mountainHeight = 0;
        
        //points for left,right,peak
        posL.set(posLX, horizon);
        posR.set(posLX+mountainWidth,horizon);
        peak.set(posLX+mountainWidth/2,horizon-mountainHeight);
        
        //color
        color.set(ofRandom(255));
        }
    }
   }


//---------------------------------------------------------------
void mountain::update(){
    

}


//---------------------------------------------------------------
void mountain::draw(){
//    ofSetColor(color);
//    ofDrawCircle(pos.x, pos.y, radius);
    ofPushMatrix();

    ofTranslate(ofGetWidth()/2,ofGetHeight()/2);
    for (int i = 0; i <20; i++){
        for (int j = 0; j < 20; j++){

            ofPushMatrix();
            ofScale(.5,.5);

            ofRotateZ((j*40+i*20)*sin(.01*(i+1)*ofGetElapsedTimef()));
            mountainWidth = (ofGetWidth()/20);
            posLX = i*(ofGetWidth()/20)-20*(j%2);
            posLY = horizon+j*(ofGetHeight()/20);
            mountainHeight = 20*j+50*cos(i+ofGetElapsedTimef());
            posL.set(posLX,posLY);
            posR.set(posLX+mountainWidth,posLY);
            peak.set(posLX+mountainWidth/2,posLY-mountainHeight);
            color.set(255-4*i-8*j,255-10*j,255-8*i);
            
            ofSetColor(color);
            
            
            ofDrawTriangle(posL.x,posL.y,posR.x,posR.y,peak.x,peak.y);
            
            ofPopMatrix();
            }

        }
    ofPopMatrix();

}
