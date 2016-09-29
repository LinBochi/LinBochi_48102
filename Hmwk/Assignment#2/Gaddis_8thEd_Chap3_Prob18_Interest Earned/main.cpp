/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 27, 2016, 8:29 AM
 * Purpose: To display interest rate, principal, interest,and amount
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(){
    //Declare variables
    float rate;
    int time;
    float principal;
    float interest;
    float amount;
    
    //Input information
    cout<<"Interest Rate:"<<setw(7);
    cin>>rate;
    cout<<"Times Compounded:"<<setw(7);
    cin>>time;
    cout<<"Principal:"<<setw(7);
    cin>>principal;
    
    //Calculation
    interest=principal*rate*time;
    amount=principal*pow(1+rate/time,time);
    
    //Display output
    cout<<"Interest: "<<setw(7)<<"$"<<interest<<endl;
    cout<<"Amount in Saving:"<<setw(7)<<"$"<<amount<<endl;
    
   
    return 0;
}

