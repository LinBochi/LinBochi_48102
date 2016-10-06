/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 4, 2016, 11:15 AM
 * Purpose: To give an order for a and b
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    float a;
    float b;
    
    //Input information
    cout<<"Please enter the number of a: ";
    cin>>a;
    cout<<"Please enter the number of b: ";
    cin>>b;
    
    //Display output
    if (a>=b)
        cout<<a<<" "<<b;
    else 
        cout<<b<<" "<<a;
          
    return 0;
}

