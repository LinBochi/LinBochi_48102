/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 25, 2016, 3:33 PM
 * Purpose: To Calculate the Average of Five Tests
 */

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float Test1,Test2,Test3,Test4,Test5;
    float average;
    
    //Input information
    cout<<"Test 1: ";
    cin>>Test1;
    cout<<"Test 2: ";
    cin>>Test2;
    cout<<"Test 3: ";
    cin>>Test5;
    cout<<"Test 4: ";
    cin>>Test4;
    cout<<"Test 5: ";
    cin>>Test5;
    
    //Calculation
    average=(Test1+Test2+Test3+Test4+Test5)/5;
    
    //Display output
    cout<<setprecision(1)<<fixed;
    cout<<"The average of five tests is: "<<average<<endl;
    
    return 0;
}

