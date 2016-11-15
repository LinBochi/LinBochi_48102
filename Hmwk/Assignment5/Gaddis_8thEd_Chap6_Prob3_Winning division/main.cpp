/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 3:19 PM
 * Purpose: determines which division had the greatest sales for a quarter.
 */

#include <iostream>
#include <string>

using namespace std;
//Function Prototype
float getSales(string);
void findHighest(float,float,float,float);

int main(int argc, char** argv) {
    //Declare variables
    float Northeast,Southeast,Northwest,Southwest;
    
    for(int i=1;i<5;i++){
        switch(i){
            case 1:
                Northeast=getSales("Northwest");
                break;
            case 2: 
                Southeast=getSales("Southeast");
                break;
            case 3:
                Northwest=getSales("Northeast");
                break;
            default:
                Southwest=getSales("Southwest");
                break;
        }
    }
    
    findHighest(Northeast,Southeast,Northwest,Southwest);
 
    return 0;
}

float getSales(string division){
    float sales;
    cout<<"Please enter the sales for division "<<division<<" :"<<endl;
    cin>>sales;
    return sales;
}

void findHighest(float ne,float se,float nw,float sw){
    float highest;
    if(ne>se&&ne>nw&&ne>sw){
        highest=ne;
        cout<<"The highest division is Northeast with $ "<<highest<<endl;
    }
    else if(se>ne&&se>nw&&se>sw){
        highest=se;
        cout<<"The highest division is Southeast with $ "<<highest<<endl;
    }
    else if(nw>se&&nw>ne&&nw>sw){
        highest=nw;
        cout<<"The highest division is Northwest with $ "<<highest<<endl;
    }
    else{
        highest=sw;
        cout<<"The highest division is Southwest with $ "<<highest<<endl;
    }
}