/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 27, 2016, 1:48 PM
 * Purpose: To convert Celsius temperatures to Fahrenheit temperatures
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float C_tem;
    float F_tem;
    
    //Input information
    cout<<"Celsius temperatures: ";
    cin>>C_tem;
    
    //Calculation
    F_tem=(9/5)*C_tem+32;
    
    //Display output
    cout<<"The Fahrenheit temperature is "<<F_tem<<endl;
    
    
    return 0;
}

