/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const float PI=4*atan(1.0);//PI
const float CNVDEGR=PI/180;//Conversion from degree to radians


//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float deg,radians;
    
    //Input or initialize values Here
    deg=5;
    radians=deg*CNVDEGR;
    
    //Display output
    cout<<"[ Degrees, Radians,    Sine,  Cosine, Tangent]"<<endl;
    cout<<fixed<<showpoint<<setprecision(5);
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;

    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    
    //Set the values
    deg+=5;
    radians=deg*CNVDEGR;
    //Display output
    cout<<"["<<setw(8)<<deg<<","<<setw(8)<<radians
            <<","<<setw(8)<<sin(radians)<<","<<setw(8)<<cos(radians)
            <<","<<setw(8)<<tan(radians)<<"]"<<endl;
    //Exit
    return 0;
}

