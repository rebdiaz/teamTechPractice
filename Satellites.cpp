//
// Created by Rebecca Diaz on 9/24/22.
//
#include "Satellites.h"

//Constructor
Satellites::Satellites() {
    elevation = 10000;
    distanceFromGroundStation = 5000;
    timeSinceAccess = 5.5; //in hours
    travelDirection = "northbound";
}
//Functions
double Satellites::calculateMinAccessTime(){
    double minAccessTime = 0;
    //Do something here using your attributes to determine
    //the minimum access time
    return minAccessTime;
}