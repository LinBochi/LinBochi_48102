/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 18, 2016, 8:42 AM
 * Purpose: Find the total, average, smallest, and the largest number in the file
 */

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    ifstream inputfile;
    int inumber,total,largest,smallest,number;
    float avg;
    string filename;
    const int SIZE=10;
    int numArray[SIZE];
    
    //Input information
    cout<<"Choose number1.h, number2.h, or number3.h"<<endl;
    cout<<"Please enter the file name: ";
    cin>>filename;
    cout<<endl;n
    
    //Input file
    inputfile.open(filename);
    
    //Array reads numbers from the file user chose
    for(int i=0;i<SIZE;i++){
        inputfile>>numArray[i];
        total+=numArray[i];
    }
    
    //Calculation
    avg=total/10.0;
    largest=numArray[0];
    smallest=numArray[0];
    
    //Find the smallest and the largest
    for(int j=0;j<SIZE;j++){
        number=numArray[j];
        if(number>largest)
            largest=number;
        if(number<smallest)
            smallest=number;
    }
    inputfile.close();//Close file
    
    //Display output
    cout<<"The smallest number in this file is "<<smallest<<endl;
    cout<<"The largest number in this file is "<<largest<<endl;
    cout<<"The total of all the number is "<<total<<endl;
    cout<<"The average of all the number is "<<avg<<endl;
    
    return 0;
}

