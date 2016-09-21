/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 19, 2016, 12:32 PM
 * Purpose: To calculate the sea level after n years
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float rate=1.5;
    int nYear1=5,nYear2=7,nYear3=10;
    float rise1,rise2,rise3;
    
    //Calculation
    rise1=nYear1*rate;
    rise2=nYear2*rate;
    rise3=nYear3*rate;
    
    //Output
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<<" mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<<" mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<<" mm"<<endl;
    return 0;
}

