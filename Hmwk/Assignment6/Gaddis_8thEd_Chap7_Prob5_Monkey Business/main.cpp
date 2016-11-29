/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2016, 2:48 PM
 * Purpose: Get the information for each monkey
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    const int row=3;
    const int col=5;
    int Monkeys[row][col];
    int least,greatest,total,sum=0;
    int food;
    float avg;
    
    //Input Information
    for(int i=0;i<row;i++){
        cout<<"Monkey "<<i+1<<endl;;
        for(int j=0;j<col;j++){
            cout<<"Day "<<j+1<<" :";
            cin>>Monkeys[i][j];
            sum+=Monkeys[i][j];
        }
        
        cout<<endl; 
    }
    
    //Assume the least and greatest amount is the first element
    least=Monkeys[0][0];
    greatest=Monkeys[0][0];
    
    //Find the least and greatest amount
    for(int k=0;k<row;k++){
        for(int l=0;l<col;l++){
            food=Monkeys[k][l];
            if(food<least)
                least=food;
            if(food>greatest)
                greatest=food;
        }
    }
    
    //Calculation for the average per day
    avg=sum/5.0;
    
    //Display output
    cout<<"The average amount of food per day is "<<avg<<endl;
    cout<<"The least amount of food is "<<least<<endl;
    cout<<"The greatest amount of food is "<<greatest<<endl;
    
    return 0;
}

