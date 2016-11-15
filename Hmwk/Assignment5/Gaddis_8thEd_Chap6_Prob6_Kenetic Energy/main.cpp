/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 6:41 PM
 * Purpose: Calculate the kinetic energy
 */

#include <iostream>
#include <cmath>
using namespace std;
//function prototypes
float kineticEnergy(float, float);
int main(int argc, char** argv) {
    //Declare variables
    float KE,v,m;
    
    //Input information
    cout<<"Please enter the value of mass: ";
    cin>>m;
    cout<<"Please enter the value of velocity: ";
    cin>>v;
    
    //Calculation
    KE=kineticEnergy(v,m);
    
    //Display output
    cout<<"The kinetic energy of this object is "<<KE<<endl;
  
    return 0;
}

float kineticEnergy(float velocity,float mass){
    float ke;
    ke=0.5*mass*pow(velocity,2);
    return ke;
}
