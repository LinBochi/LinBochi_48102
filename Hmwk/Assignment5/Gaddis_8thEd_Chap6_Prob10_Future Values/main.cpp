/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 7:55 PM
 * Purpose: Calculate the future values
 */

#include <iostream>
#include <cmath>

using namespace std;
//Function Prototype
float futureValue(int,float,float);

int main(int argc, char** argv) {
    //Declare variables
    float fValue,pValue,rate;
    int years;
    
    //Input information
    cout<<"How many years do you want to deposit?"<<endl;
    cin>>years;
    cout<<"How much do you want to deposit today?"<<endl;
    cin>>pValue;
    cout<<"What is the annual rate?"<<endl;
    cin>>rate;
    
    //Calculation
    fValue=futureValue(years,rate,pValue);
    
    //Display output
    cout<<"The future value is "<<fValue<<endl;
    
    return 0;
}

float futureValue(int t,float r,float p){
    float future;
    future=p*pow((1+r),t);
    return future;
}