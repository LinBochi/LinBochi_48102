/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 26, 2016, 9:24 PM
 * Purpose: To converts dollars to Yen and Euros
 */

#include <iostream>
#include <iomanip>

using namespace std;
    //Global constant
    const float YEN_PER_DOLLAR=98.93;
    const float EUROS_PER_DOLLAR=0.74;

int main(int argc, char** argv) {
    //Declare variables
    float dollar,Yen,Euros;
    
    //Input information
    cout<<"dollar: ";
    cin>>dollar;
    
    //Calculation
    Yen=dollar*YEN_PER_DOLLAR;
    Euros=dollar*EUROS_PER_DOLLAR;
    
    //Display output
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Yen: "<<Yen<<endl;
    cout<<"Euros: "<<Euros<<endl;
    
    return 0;
}

