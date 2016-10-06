/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 5, 2016, 11:34 AM
 * Purpose: For young student to learn calculations
 */

#include <iostream>
#include <cstdlib>    
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    //Set the random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    int num1,num2,answer,result;
    num1=rand()%900+100;//3 digit random number
    num2=rand()%900+100;//3 digit random number
    
    //Calculation
    result=num1+num2;
    
    //Display output
    cout<<" "<<num1<<endl;
    cout<<"+"<<num2<<endl;
    cout<<"-------"<<endl;
    cin>>answer;
    
    if (answer==result)
        cout<<"congratulations!";
    else
        cout<<"The correct answer is "<<result<<endl;
    
    //EXIT PROGRAM
    return 0;
}

