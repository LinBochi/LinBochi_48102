/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 3, 2016, 1:20 PM
 * Purpose: To compare the areas of two rectangles
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare variables
    float Wide_1,Length_1,Wide_2,Length_2;
    float Area_1,Area_2;
    
    //Input information
    cout<<"Please enter the wide of the first rectangle: ";
    cin>>Wide_1;
    cout<<"Please enter the length of the first rectangle: ";
    cin>>Length_1;
    cout<<"Please enter the wide of the second rectangle: ";
    cin>>Wide_2;
    cout<<"Please enter the length of the second rectangle: ";
    cin>>Length_2;
    
    //Calculation
    Area_1=Wide_1*Length_1;
    Area_2=Wide_2*Length_2;
    
    //Display output
    if (Area_1>Area_2)
        cout<<"The first rectangle is larger than the second rectangle.\n";
    else if (Area_1<Area_2)
        cout<<"The first rectangle is smaller than the second rectangle.\n";
    else
         cout<<"The areas of these two rectangles are the same.";
    
    //Exit Program
    return 0;
}

