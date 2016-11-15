/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 6:52 PM
 * Purpose: converting a temperature from Fahrenheit to Celsius
 */

#include <iostream>

using namespace std;
//Function Prototype
float celsius(float);

int main(int argc, char** argv) {
    //Declare variables
    float c,f;
    
    for(int i=1;i<=20;i++){
        c=celsius(static_cast<float>(i));
        cout<<i<<" Fahrenheit = "<<c<<" Celsius"<<endl;
    }
   
    return 0;
}

float celsius(float f){
    float cel;
    cel=(5.0/9.0)*(f-32);
    return cel;
}