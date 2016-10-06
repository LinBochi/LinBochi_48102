/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 5, 2016, 11:05 AM
 * Purpose: To display the number of days in that month
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int month,year;
    
    //Input information
    cout<<"Please enter a month(1-12): ";
    cin>>month;
    cout<<"Please enter a year: ";
    cin>>year;
    
    //Display output
    if (month==(1||3||5||7||8|10|12))
        cout<<"31 days";
    else if (month==(4||6||9||11))
        cout<<"30 days";
    else if ((year%100==0)&&(year%400==0))
        cout<<"29 days";
    else if ((year%100!=0)&&(year%4==0))
        cout<<"29 days";
    else
        cout<<"28 days";
    
    //Exit program
    return 0;
}

