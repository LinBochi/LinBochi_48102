/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 22, 2016, 11:35 AM
 * Purpose: To calculate the number of miles that may be driven per gallon of gas
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float Gallon,Miles;
    
    //Input values
    cout << "The number of miles it can be driven on a full tank: ";
    cin>>Miles;
    cout<<"The number of gallons of gas the car can hold: ";
    cin>>Gallon;
   
    //Display output
    cout<<setprecision(2)<<fixed;
    cout<<"The number of miles that may be driven per gallon of gas is ";
    cout<<(Miles/Gallon)<<endl;
    
    
    
    
    
    
    
    
    
    
    return 0;
}

