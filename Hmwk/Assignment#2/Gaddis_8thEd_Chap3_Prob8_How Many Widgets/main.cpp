/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 27, 2016, 12:35 PM
 * Purpose: To calculate and display the number of widgets stacked on the pallet
 */

#include <iostream>

using namespace std;
    //Global constants
    const float widget=12.5;
    
int main(int argc, char** argv) {
    //Declare variables
    float pallet;
    float total;
    float number;
    
    //Input information
    cout<<"The pallet weighs: ";
    cin>>pallet;
    cout<<"The total weight is: ";
    cin>>total;
    
    //Calculation
    number=(total-pallet)/widget;
    
    //Display input
    cout<<"The number of widgets is: "<<number<<endl;
    
    
    return 0;
}

