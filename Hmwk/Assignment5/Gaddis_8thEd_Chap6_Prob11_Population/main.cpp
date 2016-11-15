/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 8:05 PM
 * Purpose: calculate the new population
 */

#include <iostream>

using namespace std;
//Function Prototypes
float NewPopulation(int,int,float,float);

int main(int argc, char** argv) {
    //Declare variables
    int sP,years;
    float Brate,Drate,fP;
    
    //Input Information
    cout<<"Please enter the starting size of population:"<<endl;
    cin>>sP;
    cout<<"Please enter the annual birth rate: "<<endl;
    cin>>Brate;
    cout<<"Please enter the annual death rate:"<<endl;
    cin>>Drate;
    cout<<"Please enter the number of years:"<<endl;
    cin>>years;
    while(years<1){
        cout<<"Please enter a valid number of years: "<<endl;
        cin>>years;
    }
    
    //Calculation
    fP=NewPopulation(years,sP,Brate,Drate);
    
    //display output
    cout<<"The new population after "<<years<<" years is "<<fP<<endl;
    
    
    return 0;
}

float NewPopulation(int y,int p,float b,float d){
    float n;
    for(int i=1;i<=y;i++){
        n=p+y*b*p-y*d*p;
    }
    return n;
}