/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 3, 2016, 1:20 PM
 * Purpose: To turn seconds into minutes, hours or days
 */

#include <iostream>
using namespace std;
const float Second1=60;
const float Second2=3600;
const float Second3=86400;

int main(int argc, char** argv) {
    //Declare variables
    float second,minute,hour,day;
    
    //Input information
    cout<<"Please enter a number of seconds: ";
    cin>>second;
    
    //Calculation
    minute=second/Second1;
    hour=second/Second2;
    day=second/Second3;
    
    //Display input
    if (second>=60)
        cout<<"It is "<<minute<<" minutes.";
    else if (second>=3600&&second<86400)
        cout<<"It is "<<hour<<" hours.";
    else if (second>=86400)
        cout<<"It is "<<day<<" days.";
    else 
        cout<<"It is "<<second<<" seconds.";
     
    //Exit program            
    return 0;
}

