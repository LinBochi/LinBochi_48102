/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 26, 2016, 11:44 AM
 * Purpose: To calculate the percentage of male and female students in the class
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float female,male;
    float M_percentage,F_percentage;
    
    //Input information
    cout<<"The number of males: ";
    cin>>male;
    cout<<"The number of females: ";
    cin>>female;
    
    //Calculation
    M_percentage=male/(male+female);
    F_percentage=female/(male+female);
    
    //Display output
    cout<<setprecision(1)<<fixed;
    cout<<"The percentage of males in class is "<<M_percentage<<endl;
    cout<<"The percentage of females in class is "<<F_percentage<<endl;
    
    
    
    
    
    return 0;
}

