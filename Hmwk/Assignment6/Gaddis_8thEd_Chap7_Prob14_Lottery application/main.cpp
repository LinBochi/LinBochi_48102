/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 18, 2016, 7:34 PM
 * Purpose: lottery game
 */

#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=5;
    int lottery[SIZE];
    int user[SIZE];
    int match=0;
    
    //Set the random number seed
    srand(static_cast<int>(time(0)));
    for(int i=0;i<SIZE;i++){
        lottery[i]=rand()%10;
    }
    
    //Input information
    cout<<"Your lottery guess"<<endl;
    for(int k=0;k<SIZE;k++){
        cout<<k+1<<" digit:";
        cin>>user[k];
        if(lottery[k]==user[k]) 
            match++;
    }
    
    //Display Output
    cout<<"The lottery number is ";
    cout<<lottery[0]<<lottery[1]<<lottery[2]<<lottery[3]<<lottery[4]<<endl;
    cout<<"There are "<<match<<" digits match"<<endl;
    if(match==5) 
        cout<<"Congratulations! You are a grand price winner!"<<endl;
    
    
    return 0;
}

