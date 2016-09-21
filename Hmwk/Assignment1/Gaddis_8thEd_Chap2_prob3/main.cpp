
/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 16, 2016, 8:22 PM
 * Purpose: To calculate the total tax
 */

#include <iostream>

using namespace std;

//Global Constant
const float StPERCENT=0.04;
const float CoPERCENT=0.02;

int main(int argc, char** argv) {

    //Declare Variables
    int Purchase=95; 
    float TotTax;
    
    //Calculation
    TotTax=Purchase*(StPERCENT+CoPERCENT);
    
    //Display Output
    cout<<"The total sales tax on a $95 purchase is $"<<TotTax<<"."<<endl;
    return 0;
}

