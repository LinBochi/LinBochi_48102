/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 11, 2016, 11:32 AM
 * Purpose: To get the sum of all the integers from 1 up to the number entered
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int number;
    int sum;
    
    //Input information
    cout<<"Please enter a number greater than 0: ";
    cin>>number;
    while (number<0)
    {
        cout<<"Error: Please enter a number greater than 0: ";
        cin>>number;
    }
    
    //Calculation
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    
    //Display input
    cout<<sum<<endl;
    
    return 0;
}
