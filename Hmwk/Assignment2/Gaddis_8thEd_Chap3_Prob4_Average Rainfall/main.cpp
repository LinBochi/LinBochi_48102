/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 25, 2016, 3:41 PM
 * Purpose: To calculate the average rainfall for three months
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {

    //Declare variable
    float June,July,August,Average;
    
    //Input information
    cout<<"June: ";
    cin>>June;
    cout<<"July: ";
    cin>>July;
    cout<<"August: ";
    cin>>August;
    
    //Calculation
    Average=(June+July+August)/3;
            
    //Display output
    cout<<setprecision(2)<<fixed;
    cout<<"The average rainfall for June, July, and August is ";
    cout<<Average<<"inches."<<endl;
    
    
    
    return 0;
}

