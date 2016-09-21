/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 16, 2016, 8:32 PM
 *Purpose: 
 */

#include <iostream>

using namespace std;
//Global constant 
const float mPERCENT=6.75E-2;
const float tPERCENT=0.2;

int main(int argc, char** argv) {
//Declare Variables
    float meal=88.67;
    float tax,tip,total;
    
    //Calculation
    tax=meal*mPERCENT;
    tip=(meal+tax)*tPERCENT;
    total=meal+tax+tip;
    
    //Display output
    cout<<"meal cost:$"<<meal<<endl;
    cout<<"tax:$"<<tax<<endl;
    cout<<"tip:$"<<tip<<endl;
    cout<<"total bill:$"<<total<<endl;
    
    return 0;
}

