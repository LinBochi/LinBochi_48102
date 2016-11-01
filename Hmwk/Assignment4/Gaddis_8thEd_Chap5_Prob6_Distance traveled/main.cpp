/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 16, 2016, 10:23 PM
 * Purpose: to display the distance the vehicle has traveled for each hour of that time period.
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    float speed;
    float time;
    float distance;
        
    //Input information
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    
    while(speed<=0)
    {
        cout<<"It should be greater than 0. Please enter again: ";
        cin>>speed;
    }
        
    cout<<"How many hours has it traveled? ";
    cin>>time;
        
    while(time<1)
    {
            cout<<"It should be greater or equal to 1. Please enter again: ";
            cin>>time;
    }
    cout<<"Hour    Distance Traveled"<<endl;
    cout<<"--------------------------------"<<endl;
    
    //Display output
    for(int i=1;i<=time;i++)
    {
        distance=speed*i;
        cout<<i<<"\t\t"<<distance<<endl;
    }
        
    //Exit Program
    return 0;
}

