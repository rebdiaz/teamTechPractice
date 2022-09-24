//
// Created by Rebecca Diaz on 9/23/22.
//

#include <string>
using namespace std;
#pragma once

class Satellites{
    //Attributes
    unsigned int elevation;
    unsigned int distanceFromGroundStation;
    double timeSinceAccess;
    string travelDirection;
public:
    //Constructor
    Satellites();
    //Functions
    double calculateMinAccessTime();
};
