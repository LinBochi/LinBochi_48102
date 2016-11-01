/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 17, 2016, 7:23 PM
 * Purpose: to display a table of the Celsius temperatures 0–20, and their Fahrenheit equivalents.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float F_tem;
    
    //Display output
    for(int i=1; i<=20; i++)
    {
        F_tem=(9/5)*i+32;
        cout<<i<<"\t"<<F_tem<<endl;
    }           
    
    
    return 0;
}

