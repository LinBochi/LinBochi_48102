/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 19, 2016, 12:19 PM
 * Purpose: To calculate the employee's total annual pay
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float payAmount=2200.00;
    int payPeriods=26;
    float annualPay;
    
    //Calculation
    annualPay=payAmount*payPeriods;
    
    //Display output
    cout<<"The total annual pay: $"<<annualPay<<endl;
    
    //
    return 0;
}

