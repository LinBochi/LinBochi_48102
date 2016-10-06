/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 3, 2016, 1:20 PM
 * Purpose: To calculate the weight of a object
 */

#include <iostream>

using namespace std;
const float Gravity=9.8;

int main(int argc, char** argv) {
    //Declare variable
    float mass,weight;
    
    //Input information
    cout<<"Please enter the mass of the object: ";
    cin>>mass;
    
    //Calculation
    weight=mass*Gravity;
    
    //Display output
    if (weight>1000)
    {
        cout<<"This object weights "<<weight<<" Newtons.\n";
        cout<<"This object is too heavy.";
    }
    else if(weight<10)
    {
        cout<<"This object weights "<<weight<<" Newtons.\n";
        cout<<"This object is too light.";
    }
    else
        cout<<"This object weights "<<weight<<" Newtons.";
    
    
    return 0;
}

