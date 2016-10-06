/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 3, 2016, 1:20 PM
 * Purpose: To determine which number is the smaller and which is the larger
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float a,b;
    
    //Input information
    cout<<"Please enter a number: ";
    cin>>a;
    cout<<"Please enter the other number: ";
    cin>>b;
    
    //Output
    if (a>b)
        cout<<a<<">"<<b<<endl;
    else
        cout<<a<<"<"<<b<<endl;
    
    
    
    return 0;
}

