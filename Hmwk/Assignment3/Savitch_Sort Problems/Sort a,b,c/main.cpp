/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 4, 2016, 11:15 AM
 * Purpose: To give an order for a and b
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare Variables
    float a,b,c;
    
    //Input information
    cout<<"Please enter the number for a: ";
    cin>>a;
    cout<<"Please enter the number for b: ";
    cin>>b;
    cout<<"Please enter the number for c: ";
    cin>>c;
    
    //Display information
    if (a>b&&b>c)
        cout<<a<<" "<<b<<" "<<c;
    else if (a>b&&a>c&&c>b)
       cout<<a<<" "<<c<<" "<<b;
    else if (b>a&&a>c)
        cout<<b<<" "<<a<<" "<<c;
    else if (b>a&&b>c&&c>a)
       cout<<b<<" "<<c<<" "<<a;
    else if (c>a&&a>b)
        cout<<c<<" "<<a<<" "<<b;
    else if (c>a&&c>b&&b>a)
        cout<<c<<" "<<b<<" "<<a;
    else 
        cout<<a<<" "<<b<<" "<<c;
    
    return 0;
}

