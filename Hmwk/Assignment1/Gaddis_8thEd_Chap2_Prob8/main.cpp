/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 19, 2016, 6:41 PM
 * Purpose: Investigate the sizes of data types
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    
    //Display Information
    cout<<"The size of a character is "<<sizeof(char)<<" byte."<<endl;
    cout<<"The size of an integer is "<<sizeof(int)<<" byte.\n";
    cout<<"The size of a float is "<<sizeof(float)<<" byte.\n";
    cout<<"The size of a double is "<<sizeof(double)<<" byte."<<endl;
    
    return 0;
}

