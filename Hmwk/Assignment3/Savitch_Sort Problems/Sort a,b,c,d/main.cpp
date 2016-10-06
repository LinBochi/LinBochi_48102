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
    float a,b,c,d;
    
    //Input information
    cout<<"Please enter the number for a: ";
    cin>>a;
    cout<<"Please enter the number for b: ";
    cin>>b;
    cout<<"Please enter the number for c: ";
    cin>>c;
    cout<<"Please enter the number for d: ";
    cin>>d;
    
    //Display output
    if (a>b&&b>c&&c>d)
        cout<<a<<" "<<b<<" "<<c<<" "<<d;
    else if (a>b&&a>c&&a>d&&b>c&&b>d&&d>c)
        cout<<a<<" "<<b<<" "<<c<<" "<<d;
    else if (a>b&&a>c&&a>d&&c>b&&c>d&&b>d)
        cout<<a<<" "<<c<<" "<<b<<" "<<d;
    else if (a>b&&a>c&&a>d&&c>b&&c>d&&d>b)
        cout<<a<<" "<<c<<" "<<d<<" "<<b;
    else if (a>b&&a>c&&a>d&&d>b&&d>c&&c>b)
        cout<<a<<" "<<d<<" "<<c<<" "<<b;
    else if (a>b&&a>c&&a>d&&d>b&&d>c&&b>c)
        cout<<a<<" "<<d<<" "<<b<<" "<<c;
    else if (b>a&&b>c&&b>d&&a>c&&a>d&&c>d)
        cout<<b<<" "<<a<<" "<<c<<" "<<d;
    else if (b>a&&b>c&&b>d&&a>c&&a>d&&d>c)
        cout<<b<<" "<<a<<" "<<d<<" "<<c;
    else if (b>a&&b>c&&b>d&&c>a&&c>d&&a>d)
        cout<<b<<" "<<c<<" "<<a<<" "<<d;
    else if (b>a&&b>c&&b>d&&c>b&&c>d&&d>a)
        cout<<b<<" "<<c<<" "<<d<<" "<<a;
    else if (b>a&&b>c&&b>d&&d>a&&b>c&&a>c)
        cout<<b<<" "<<d<<" "<<a<<" "<<c;
    else if (b>a&&b>c&&b>d&&d>a&&b>c&&c>a)
        cout<<b<<" "<<d<<" "<<c<<" "<<a;
    else if (c>a&&c>b&&c>d&&a>b&&a>d&&b>d)
        cout<<c<<" "<<a<<" "<<b<<" "<<d;
    else if (c>a&&c>b&&c>d&&a>b&&a>d&&d>b)
        cout<<c<<" "<<a<<" "<<d<<" "<<b;
    else if (c>a&&c>b&&c>d&&b>a&&b>d&&a>d)
        cout<<c<<" "<<b<<" "<<a<<" "<<d;
    else if (c>a&&c>b&&c>d&&b>d&&b>a&&d>a)
        cout<<c<<" "<<b<<" "<<d<<" "<<a;
    else if (c>a&&c>b&&c>d&&d>a&&d>b&&a>b)
        cout<<c<<" "<<d<<" "<<a<<" "<<b;    
    else if (c>a&&c>b&&c>d&&d>a&&d>b&&b>a)
        cout<<c<<" "<<d<<" "<<b<<" "<<a;
    else if (d>a&&d>b&&d>c&&a>b&&a>c&&b>c)
        cout<<d<<" "<<a<<" "<<b<<" "<<c;
    else if (d>a&&d>b&&d>c&&a>b&&a>c&&c>b)
        cout<<d<<" "<<a<<" "<<c<<" "<<b;
    else if (d>a&&d>b&&d>c&&c>a&&c>b&&a>b)
        cout<<d<<" "<<c<<" "<<a<<" "<<b;
    else if (d>a&&d>b&&d>c&&c>a&&c>b&&b>a)
        cout<<d<<" "<<c<<" "<<b<<" "<<a;
    else if (d>a&&d>b&&d>c&&b>a&&b>c&&a>c)
        cout<<d<<" "<<b<<" "<<a<<" "<<c;
    else if (d>a&&d>b&&d>c&&b>a&&b>c&&c>a)
        cout<<d<<" "<<b<<" "<<c<<" "<<a;
    else 
        cout<<a<<" "<<b<<" "<<c<<" "<<d;
        
        
    return 0;
}