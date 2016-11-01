/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 17, 2016, 8:07 PM
 * Purpose: calculates how much a person would earn over a period of time
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int day=1;
    float money=1.0;
    float Sal_pDay=0.0;
    float total=0.0;
    
    //Input information
    cout<<"Please enter the number of the days: ";
    cin>>day;
     
    while(day<1)
    {
        cout<<"Please enter a number greater or equal to 1: ";
        cin>>day;
    }
    
    //Display output
    for(int i=1; i<=day; i++)
    {
        Sal_pDay=money/100;
        money*=2;
        cout<<"Day "<<i<<": $"<<Sal_pDay<<endl;
        total+=Sal_pDay;
        
    }
    
    
    cout<<"The total is $"<<total<<endl;
    
    //Exit program
    return 0;
}

