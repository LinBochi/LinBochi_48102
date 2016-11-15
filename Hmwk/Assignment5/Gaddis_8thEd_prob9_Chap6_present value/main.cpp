/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 7:41 PM
 * Purpose: Calculate the present value
 */

#include <iostream>
#include <cmath>

using namespace std;

//Function prototypes
float presentValue(float);

int main(int argc, char** argv) {
    //Declare variables
    float pValue,rate;
    
    //Input information
    cout<<"Please enter your annual rate: "<<endl;
    cin>>rate;
    
    //Calculation
    pValue=presentValue(rate);
    
    //Display output
    cout<<"You should deposit $"<<pValue<<" today."0<<endl;
 
    return 0;
}

float presentValue(float r){
    float p;
    p=10000/pow((1+r),10);
    return p;
}
