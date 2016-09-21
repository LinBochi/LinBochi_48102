/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 19, 2016, 7:40 PM
 * Purpose: To calculate the number of customer
 */

#include <iostream>

using namespace std;
    //Global constant
    const float PERCENT=0.15;
    const float CfPERCENT=0.58;

int main(int argc, char** argv) {
    //Declare variables
    int customer=16500;
    int PerWekCust;
    int CfCustomer;
    
    //Calculation
    PerWekCust=customer*PERCENT;
    CfCustomer=PerWekCust*CfPERCENT;
            
    //Display Output
    cout<<"The approximate number of customers in the survey who purchase";
    cout<<"one or more energy drinks per week is "<<PerWekCust<<endl;
    cout<<"The approximate number of customers in the survey who";
    cout<<"prefer citrus-flavored energy drinks  is "<<CfCustomer<<endl;
    
    return 0;
}

