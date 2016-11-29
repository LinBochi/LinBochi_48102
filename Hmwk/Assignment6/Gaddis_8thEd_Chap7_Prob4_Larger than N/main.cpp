/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 17, 2016, 2:11 PM
 * Purpose: Display all the number that is greater than N(20)
 */

#include <iostream>

using namespace std;
//Function Prototypes
void allNumber(int [],int,int);
        
int main(int argc, char** argv) {
    //Declare variables
    int SIZE=10;
    int intArray[10]={10,20,30,40,50,60,70,80,90,100};
    int n=20;
    
    //Display all the number that greater than 20
    allNumber(intArray,SIZE,n);
  
    return 0;
}

void allNumber(int a[],int size, int number){
    int num;
    cout<<"The numbers that are greater than 20 in this array are:"<<endl;
    for(int i=0;i<size;i++){
        num=a[i];
        if(num>number)
            cout<<num<<" ";
    }
}