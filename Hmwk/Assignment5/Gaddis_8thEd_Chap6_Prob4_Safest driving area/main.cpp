/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on November 11, 2016, 3:19 PM
 * Purpose: determines Safest driving area
 */
#include <iostream>
#include <string>
using namespace std;
//function prototypes
int getNumAccidents(string);
void findLowest(int,int,int,int,int);

int main(int argc, char** argv) {
   //Declare variables
    int north,south,east,west,central;
    
    for(int i=1;i<6;i++){
        switch(i){
            case 1:
                north=getNumAccidents("North");
                break;
            case 2: 
                south=getNumAccidents("South");
                break;
            case 3:
                north=getNumAccidents("North");
                break;
            case 4:
                south=getNumAccidents("South");
                break;
            default:
                central=getNumAccidents("Central");
                break;
        }
    }
    
    findLowest(north,south,east,west,central);
 
    return 0;
}

int getNumAccidents(string region){
    int number;
    cout<<"Please enter the number of accidents for region "<<region<<" :"<<endl;
    cin>>number;
    return number;
}

void findLowest(int nt,int st,int et,int wt,int ct){
    int lowest;
    if(nt<st&&nt<et&&nt<wt&&nt<ct){
        lowest=nt;
        cout<<"The lowest region is North with accidents "<<lowest<<endl;
    }
    else if(st<nt&&st<et&&st<wt&&st<ct){
        lowest=st;
        cout<<"The lowest region is South with accidents "<<lowest<<endl;
    }
    else if(et<st&&et<nt&&et<wt&&et<ct){
        lowest=et;
        cout<<"The lowest region is East with accidents "<<lowest<<endl;
    }
    else if(wt<st&&wt<et&&wt<nt&&wt<ct){
        lowest=wt;
        cout<<"The lowest region is West with accidents "<<lowest<<endl;
    }
    else{
        lowest=ct;
        cout<<"The lowest region is central with accidents "<<lowest<<endl;
    }
}
    

