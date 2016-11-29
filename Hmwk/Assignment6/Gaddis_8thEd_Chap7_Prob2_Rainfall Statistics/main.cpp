/* 
 * File:   main.cpp
 * Author: Boch
 * Created on November 15, 2016, 12:07 PM
 * Purpose: Calculate and display the total, the average, lowest, and the highest
 */

#include <iostream>
#include <iomanip>

using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=12;
    float Rainfall[SIZE];
    float rainfall,highest,lowest,total,avg;
    int i=0;
    //Input information
    for(i=0;i<SIZE;i++){
        cout<<"Month "<<i+1<<" : ";
        cin>>Rainfall[i];
        while(Rainfall[i]<0){
            cout<<"Please enter again: ";
            cin>>Rainfall[i];
        }
        total+=Rainfall[i];
    }
    cout<<endl;
    
    //Assume highest and lowest is the first element
    highest=Rainfall[0];
    lowest=Rainfall[0];
    
    //Get the lowest and the highest
    for(i=0;i<SIZE;i++){
        rainfall=Rainfall[i];
        if(rainfall<lowest)
            lowest=rainfall;
        if(rainfall>highest)
            highest=rainfall;
    }
    
    //Calculation
    //Get the average rainfall
    avg=total/3.0;
    
    //Display Output
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"The lowest rainfall is "<<lowest<<endl;
    cout<<"The highest rainfall is "<<highest<<endl;
    cout<<"The average rainfall of these 12 months is "<<avg<<endl;;
    cout<<"The total rainfall of these 12 months is "<<total<<endl;;
    
    
    return 0;
}

