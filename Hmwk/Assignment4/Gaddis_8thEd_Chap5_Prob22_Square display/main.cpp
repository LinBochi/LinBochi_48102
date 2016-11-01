/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 17, 2016, 7:54 PM
 * Purpose: display a square on the screen using the character ‘X’.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int num;
    
    //Input information
    cout<<"Please enter a positive number: ";
    cin>>num;
    
    //Display output
    for(int i=1; i<=num; i++)
    {
        for(int a=1; a<=num; a++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
    return 0;
}

