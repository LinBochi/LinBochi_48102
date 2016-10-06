/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Boch
 *
 * Created on September 29, 2016, 12:20 PM
 */

#include <iostream>

using namespace std;


int main(int argc, char** argv) {
    //Declare Variables
    float waveLen;
    
    //Input Values
    cout<<"This program determines the band of radians"<<endl;
    cout<<"What is the wave length of the band of radians"<<endl;
    cin>>waveLen;
    
    //Progress values -> Map inputs to Outputs
    cout<< ((waveLen>1e-2f)  ?"Radio Band":
            (waveLen>1e-3f)  ?"Micro Wave Band":
            (waveLen>7e-7f)  ?"Infra-red Band":
            (waveLen>4e-7f)  ?"Visible Band":
            (waveLen>1e-8f)  ?"Ultra-Violet Band":    
            (waveLen>1e-11f) ?"X-Ray band":"Gamma-Ray Band")<<endl;
    
   
    
    return 0;
}

