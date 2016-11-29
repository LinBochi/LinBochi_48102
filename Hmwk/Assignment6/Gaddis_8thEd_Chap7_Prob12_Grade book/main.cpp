/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 18, 2016, 11:36 AM
 * Purpose: Calculate the average and letter score
 */

#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    string name;
    const int row=5,col=4;
    float ScoArray[row][col];
    float total=0,avg;
    
    //Input information
    for(int i=0;i<row;i++){
        cout<<"Student "<<i+1<<" :";
        cin>>name;
        for(int j=0;j<col;j++){
            cout<<"Grade of test "<<j+1<<": ";
            cin>>ScoArray[i][j];
            total+=ScoArray[i][j];
            avg=total/4.0;
        }
            //Display output
            cout<<"The average grade of this student is "<<avg<<endl;
            if(avg>=90&&avg<=100)
                cout<<"The letter grade is A."<<endl;
            else if(avg>=80&&avg<90)
                cout<<"The letter grade is B."<<endl;
            else if(avg>=70&&avg<80)
                cout<<"The letter grade is C."<<endl;
            else if(avg>=60&&avg<70)
                cout<<"The letter grade is D."<<endl;
            else
                cout<<"The letter grade is F."<<endl;
            
            //Initialize the total value to 0
            total=0;
            cout<<endl;
    }
    
    

    return 0;
}

