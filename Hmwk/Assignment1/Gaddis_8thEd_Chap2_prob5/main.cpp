/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 16, 2016, 8:49 PM
 * Purpose: To calculate the average
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int n1=28,n2=32,n3=37,n4=24,n5=33;
    int sum,ave;
    
    //Calculation
    sum=n1+n2+n3+n4+n5;
    ave=sum/5;
            
    //Display Output
    cout<<"The average is "<<ave<<endl;
    return 0;
}

