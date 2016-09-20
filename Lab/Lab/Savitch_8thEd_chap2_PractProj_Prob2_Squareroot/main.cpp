/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 20, 2016, 11:23 AM
 * Purpose: Iteration to find Square Root
 */

#include <iostream>   //Input output object
#include <iomanip>    //Format library
#include <cstdlib>    //Ramdom number
#include <cmath>      //Square root function
#include <ctime>      //Time tp set random number seed
using namespace std;

//Global Constant
const float MAXRAND=pow(2,31)-1;//Max signed positive value for int


int main(int argc, char** argv) {

    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
            
    //Declare variables
    float n,guess,r;
    float scale=90,shift=10;
    short counter=0;
    
    //Input values-float random number (10,100) vs.
    //             integer random number rand()%scale+shift [10,100]
    n=rand()/MAXRAND*scale+shift;
    guess=n/2;
    
    //Display the Initialization
    cout<<"The number to find the square root of = "<<n<<endl;
    cout<<"The initial guess = "<<guess<<endl;
    
    //First Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    
    //Display Output
    cout<<fixed<<showpoint<<setprecision(4)<<endl;
    cout<<"pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<guess<<"]"<<endl;
    
    //Second Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<guess<<"]"<<endl;
    
    //Next Pass
    r=n/guess;
    guess=(guess+r)/2;
    counter+=1;
    //Display Output
    cout<<"pass "<<counter<<" [r,guess]=["<<setw(7)<<r
            <<","<<guess<<"]"<<endl;
    
    //The answer or solution is
    cout<<"The sqrt ("<<n<<")="<<sqrt (n)<<endl;
    
    return 0;
}

