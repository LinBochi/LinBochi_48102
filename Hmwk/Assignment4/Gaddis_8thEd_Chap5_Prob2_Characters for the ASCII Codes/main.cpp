/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 16, 2016, 9:04 PM
 * Purpose: to display the characters for the ASCII codes 0 through 127
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    char letter=0; 
    
    //Display output
    for(int i=0; i<=127; i++)
    {
        letter++;
        cout<<letter<<endl;
    }
    return 0;
}

