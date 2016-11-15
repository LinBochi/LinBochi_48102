/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 5:32 PM
 * Purpose:Determine the distance the object falls
 */

#include <cmath>
#include <iostream>

using namespace std;

//Function prototypes
float fallingDistance(int);

int main(int argc, char** argv) {
    //Declare variables
    float Distance;
    
    for(int i=1;i<=10;i++){
        Distance=fallingDistance(i);
        cout<<i<<" seconds: "<<Distance<<" meters"<<endl;
    }
    
    return 0;
}

float fallingDistance(int time){
    float distance,gravity=9.8;
    distance=gravity*0.5*(pow(time,2));
    return distance;
}
