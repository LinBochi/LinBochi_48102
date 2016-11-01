/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 16, 2016, 9:59 PM
 * Purpose: to display the projected rates for the next six years
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int year=6;
    float membership=2500;
    float rate=0.04;
    
    //Display output
    for(int i=1; i<=year; i++)
        
    {
        membership=membership+(membership*rate);
        cout<<"Year "<<i<<": "<<membership<<endl;
    }
    return 0;
}

