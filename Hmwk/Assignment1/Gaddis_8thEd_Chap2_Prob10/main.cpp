/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 19, 2016, 6:52 PM
 * Purpose: To calculate the number of miles per gallon the car gets
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int MilDriven=375;
    int Galofgas=15;
    int MPG;
    
    //Calculation
    MPG=MilDriven/Galofgas;
    
    //Display output
    cout<<"The car gets "<<MPG<<" miles per gallon."<<endl;
    
    return 0;
}

