/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 26, 2016, 12:06 PM
 * Purpose: To calculate the ingredient
 */

#include <iostream>
#include <iomanip>

using namespace std;
   
int main(int argc, char** argv) {
    //Declare variables
    float sugar,butter,flour;
    int cookies;
    
    //Input information
    cout<<"How many cookies do you want to make: ";
    cin>>cookies;
    
    //Calculation
    sugar=(1.5/48)*cookies;
    butter=(1/48)*cookies;
    flour=(2.75/48)*cookies;
    
    //Display output
    cout<<setprecision(1)<<fixed;
    cout<<"You need "<<sugar<<" cups of sugar."<<endl;
    cout<<"You need "<<butter<<" cups of butter."<<endl;
    cout<<"you need "<<flour<<" cups of flour."<<endl;
    
    
    
    
    return 0;
}

