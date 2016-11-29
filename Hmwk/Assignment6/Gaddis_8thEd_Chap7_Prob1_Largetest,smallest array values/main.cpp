/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 15, 2016, 11:50 AM
 * Purpose: Display the largest and smallest values stored in the array
 */

#include <iostream>

using namespace std;
//Global constants
const int SIZE=3;

int main(int argc, char** argv) {
    //Declare variables
    int smallest;
    int largest;
    int number;
    int arrayVal[SIZE];
    
    //Input information
    for(int i=0;i<SIZE;i++){
        cout<<"Please enter number "<<i+1<<" : ";
        cin>>arrayVal[i];
    }
    
    cout<<endl;
    largest=arrayVal[0]; //Assume the smallest is the first number
    smallest=arrayVal[0];//Assume the largest is the first number
    //Find the smallest and the largest using for loop
    for(int i=0;i<SIZE;i++){
        number=arrayVal[i];
        if(number<smallest)
            smallest=number;
        if(number>largest)
            largest=number;  
    }
    
    //Display Output
    cout<<"The smallest number is "<<smallest<<endl;
    cout<<"The largest number is "<<largest<<endl;
    return 0;
}

