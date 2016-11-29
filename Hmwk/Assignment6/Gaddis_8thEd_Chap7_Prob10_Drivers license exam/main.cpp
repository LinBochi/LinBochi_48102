/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 18, 2016, 12:15 PM
 * Purpose: Checking answers
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    //Declare variables
    int incorrect=0;
    const int SIZE=20;
    char uAnswer[SIZE];
    char AnswerKey[SIZE]={'A','D','B','B','C','B','A','B','C','D',
                          'A','C','D','B','D','C','C','A','D','B'};
    
    //Input information
    cout<<"Please enter your answer below:"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<"Question"<<i+1<<" : ";
        cin>>uAnswer[i];
        while(uAnswer[i]<'A'||uAnswer[i]>'D'){
            cout<<"Please enter a valid answer: ";
            cin>>uAnswer[i];
        }
        cout<<endl;
    }
    for(int j=0;j<SIZE;j++){
        if(uAnswer[j]!=AnswerKey[j]){
            cout<<"You didn't answer question "<<j+1<<" correctly."<<endl;
            incorrect++;
        }
    }
    
    //Display output
    cout<<"The number of incorrectly answered questions is "<<incorrect<<endl;
    cout<<"The number of correctly answered questions is "<<SIZE-incorrect<<endl;
    
    return 0;
}

