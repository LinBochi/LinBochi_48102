/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 7:08 PM
 * Purpose: head of tails
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;
//Function prototype
int coinToss();

int main(int argc, char** argv) {
    //Declare variables
    int times,Rnumber;
   
    //Input information
    cout<<"How many times do you want to toss?"<<endl;
    cin>>times;
    
    //Display output
    for(int i=1;i<=times;i++){
        Rnumber=coinToss();
        if(Rnumber==1){
            cout<<"heads"<<endl;
        }
        else{
            cout<<"tails"<<endl;
        }
    }
    return 0;
}

int coinToss(){
    //Set the random seed
    int ranNumber;
    srand(time(0));
    ranNumber=1+rand()%2;
    return ranNumber;
}