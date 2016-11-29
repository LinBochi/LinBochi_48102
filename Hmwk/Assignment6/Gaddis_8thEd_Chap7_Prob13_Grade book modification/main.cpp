/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 18, 2016, 9:30 AM
 * Purpose: Drop the lowest, and calculate the average grade
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    float total,avg,lowest,grade;
    const int SIZE=4;
    float grdArray[SIZE];
    
    for(int i=0;i<SIZE;i++){
        cout<<"Please enter grade "<<i+1<<": ";
        cin>>grdArray[i];
        if(grdArray[i]>=90)
            cout<<"Grade A"<<endl;
        else if(grdArray[i]>=80&&grdArray[i]<90)
            cout<<"Grade B"<<endl;
        else if(grdArray[i]>=70&&grdArray[i]<80)
            cout<<"Grade C"<<endl;
        else
            cout<<"Grade D"<<endl;
        total+=grdArray[i];
    }
    lowest=grdArray[0];
    for(int j=0;j<SIZE;j++){
        grade=grdArray[j];
        if(grade<lowest)
            lowest=grade;
    }
    
    //Calculate the average of the three highest grades
    avg=(total-lowest)/3.0;
    
    cout<<"The average of this student is "<<avg<<endl;
    
    
    return 0;
}

