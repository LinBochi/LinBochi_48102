/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 16, 2016, 9:04 PM
 * Purpose: showing the number of millimeters that the ocean will have risen each year for the next 25 years.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float Sealvl=0;
    int year=25;
    
    //Display output
    for(int i=1; i<=year; i++)
    {
        Sealvl+=1.5;
        cout<<"Year "<<i<<": "<<Sealvl<<endl;
    }
    //Exit Program
    
    
    return 0;
}

