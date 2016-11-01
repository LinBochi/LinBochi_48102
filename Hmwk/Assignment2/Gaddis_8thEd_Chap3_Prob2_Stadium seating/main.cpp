/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 25, 2016, 3:07 PM
 * Purpose: To Calculate the amount of income
 */

#include <iostream>
#include <iomanip>

using namespace std;
    const int Class_A=15;
    const int Class_B=12;
    const int Class_C=9;
int main(int argc, char** argv) {
    //Declare variables
    int C_A,C_B,C_C;
    float total;
    
    //Input
    cout<<"How many tickets for Class A of seats were sold: ";
    cin>>C_A;
    cout<<"How many tickets for Class B of seats were sold: ";
    cin>>C_B;
    cout<<"How many tickets for Class C of seats were sold: ";
    cin>>C_C;
    
    //Calculation
    total=Class_A*C_A+Class_B*C_B+Class_C*C_C;
    
    //Display output
    cout<<setprecision(2)<<fixed;
    cout<<"The amount of income is: "<<total<<endl;
    
    
    return 0;
}

