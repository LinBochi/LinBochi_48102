/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 4, 2016, 9:04 PM
 * Purpose: To test one dollar for users
 */

#include <iostream>

using namespace std;
//Global constants
const float penny=0.01;
const float nickel=0.05;
const float dime=0.1;
const float quarter=0.25;

int main(int argc, char** argv) {
    //Declare variables
    int pennies,nickels,dimes,quarters;
    float total;
    
    //Input information
    cout<<"Please enter the number of pennies: ";
    cin>>pennies;
    cout<<"Please enter the number of nickels: ";
    cin>>nickels;
    cout<<"Please enter the number of dimes: ";
    cin>>dimes;
    cout<<"Please enter the number of quarters: ";
    cin>>quarters;
    
    //Calculation
    total=pennies*penny+nickels*nickel+dimes*dime+quarters*quarter;
    
    //Display output
    if (total==1)
        cout<<"Congratulations! You win this game!";
    else if (total<1)
        cout<<"Sorry, this amount is less than one dollar.";
    else 
        cout<<"Sorry, this amount is greater than one dollar.";
    
    
    return 0;
}

