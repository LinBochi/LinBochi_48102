
/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 16, 2016, 7:45 PM
 * Purpose: To predict how much the East Coast division will generate
 */

#include <iostream>

using namespace std;
    //Global Constant
    const float PERCENT=0.58;

int main(int argc, char** argv) {
    //Declare Variable
    float total=8.6;
    float division;
    
    //Calculation
    division=total*PERCENT;
    
    //Display Output
    cout<<"East Coast division will generate $"<<division;
    cout<<" million this year."<<endl;
    
    return 0;
}

