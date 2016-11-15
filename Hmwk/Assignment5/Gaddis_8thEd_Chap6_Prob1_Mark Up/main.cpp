/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 3:19 PM
 * Purpose: Display the item’s retail price
 */

#include <iostream>

using namespace std;
//Function Prototype
float calculateRetail(float,float);

int main(int argc, char** argv) {
    //Declare variables
    float wSale,Percentage,rPrice;
    
    //Input information
    //Input whole sale cost
    cout<<"Please enter the item's whole sale cost: "<<endl;
    cin>>wSale;
    while(wSale<0){
        cout<<"Please enter a positive number: "<<endl;
        cin>>wSale;
    }
    //Input percentage
    cout<<"Please enter the item's mark up percentage: "<<endl;
    cin>>Percentage;
    while(Percentage<0){
        cout<<"Please enter a positive number: "<<endl;
        cin>>Percentage;
    }
    //Calculation and display output
    rPrice=calculateRetail(wSale,Percentage);
    
    //Display output
    cout<<"The item's retail price is "<<rPrice<<endl;
    
    return 0;
}

float calculateRetail(float num1,float num2){
    float Retail;
    Retail=num1*(1+num2);
    return Retail;
}