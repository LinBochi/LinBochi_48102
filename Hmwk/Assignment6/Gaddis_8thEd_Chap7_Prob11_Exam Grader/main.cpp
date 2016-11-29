/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 18, 2016, 5:49 PM
 * Purpose: Exam
 */

#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int incorrect=0;
    const int SIZE=20;
    char uAnswer[SIZE];
    char AnswerKey[SIZE];
    ifstream inputfile;
    float Percentage;
    
    //Input information
    cout<<"Please enter your answer below:"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Question"<<i+1<<" : ";
        cin>>uAnswer[i];
        while(uAnswer[i]<'A'||uAnswer[i]>'D'){
            cout<<"Please enter a valid answer: ";
            cin>>uAnswer[i];
        }
    }
    cout<<endl;
    inputfile.open("Answerkeys.h");
    for(int k=0;k<SIZE;k++){
        inputfile>>AnswerKey[k];
    }
    inputfile.close();
    
    for(int j=0;j<SIZE;j++){
        if(uAnswer[j]!=AnswerKey[j]){
            cout<<"question "<<j+1<<" is incorrect."<<endl;
            cout<<"You answered "<<uAnswer[j]<<" The correct answer is "<<AnswerKey[j]<<endl;
            incorrect++;
        }
    }
    
    //Calculation for percentage
    Percentage=(SIZE-incorrect)/20.0;
    if(Percentage>0.7) cout<<"Congratulations! You pass the exam!"<<endl;
    else cout<<"You fail the exam"<<endl;
    
    //Display output
    cout<<"The number of incorrectly answered questions is "<<incorrect<<endl;
    cout<<"The number of correctly answered questions is "<<SIZE-incorrect<<endl;
    
    
    
    
    
    return 0;
}

