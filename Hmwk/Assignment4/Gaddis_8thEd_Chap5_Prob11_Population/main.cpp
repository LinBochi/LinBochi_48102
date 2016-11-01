/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 17, 2016, 11:32 AM
 * Purpose: Display the size of the population for each day
 */

#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float Startnum;
    int days;
    float rate;
    
    //Input information
    cout<<"The starting number of organism: ";
    cin>>Startnum;
    
    while(Startnum<2)
    {
        cout<<"starting number must be greater than 2: ";
        cin>>Startnum;
    }
    
    cout<<"Their average daily population increase: ";
    cin>>rate;
     
    while(rate<0)
    {
        cout<<"average daily population must be greater than 0: ";
        cin>>rate;
    }
    
    cout<<"The number of days they will multiply: ";
    cin>>days;
    
    while(days<1)
    {
        cout<<"the number of days must be greater than 1: ";
        cin>>days;
    }
    
    //Display output
    for(int i=1; i<=days; i++)
    {
        Startnum=Startnum+Startnum*pow(rate,i);
        cout<<"Day "<<i<<": "<<Startnum<<endl;
    }
    //Exit Program
    
    return 0;
}

