/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 16, 2016, 9:43 PM
 * Purpose: To display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes.
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    float cal=0;
    int minutes=30;
    
    for(int i=1; i<=minutes; i++)
    {
        cal+=3.6;
        
        if(i%5==0)
            cout<<cal<<endl;
     
    }    
    return 0;
}

