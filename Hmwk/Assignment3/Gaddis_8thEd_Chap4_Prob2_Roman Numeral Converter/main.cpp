/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 3, 2016, 1:20 PM
 * Purpose: Use a switch statement to display the Roman numeral version of that number.
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variable
    int number;
    
    //Input information
    cout<<"Enter number 1 to 10: ";
    cin>>number;
   
    //Output
    switch (number)
    {
        case 1: cout<<"You entered I.";
                 break;
        case 2: cout<<"You entered II.\n";
                 break;
        case 3: cout<<"You entered III.\n";
                 break;
        case 4: cout<<"You entered IV.\n";
                 break;
        case 5: cout<<"You entered V.\n";
                 break;
        case 6: cout<<"You entered VI.\n";
                 break;
        case 7: cout<<"You entered VII.\n";
                 break;
        case 8: cout<<"You entered VIII.\n";
                 break;
        case 9: cout<<"You entered IX.\n";
                 break;
        case 10:cout<<"You entered X.\n";
                 break;
        default: cout << "You did not enter 1 to 10.\n";
        
    }    
    //Exit Program    
    return 0;
}

