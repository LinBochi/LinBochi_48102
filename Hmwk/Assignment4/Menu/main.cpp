/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 17, 2016, 9:29 PM
 * Purpose: Menu with functions
 */

//System Libraries
#include <iostream> 
#include <cmath> //Input/Output objects
using namespace std;  //Name-space used in the System Library

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaration of Variables
    int menuItm;    //Choice from menu
    
    //Loop until users exits
    do{
    
        //Prompt for problem for user input
        cout<<"1.  Type 1  for Problem 1_Sum of numbers"<<endl;
        cout<<"2.  Type 2  for Problem 2_Characters for the ASCII code"<<endl;
        cout<<"3.  Type 3  for Problem 3_Ocean level"<<endl;
        cout<<"4.  Type 4  for Problem 4_Calories burned"<<endl;
        cout<<"5.  Type 5  for Problem 5_Membership fee increase"<<endl;
        cout<<"6.  Type 6  for Problem 6_Distance travel"<<endl;
        cout<<"7.  Type 7  for Problem 7_Pennies for pay"<<endl;
        cout<<"8.  Type 8  for Problem 11_Population"<<endl;
        cout<<"9.  Type 9  for Problem 12_Celsius to Fahrenheit table"<<endl;
        cout<<"10. Type 10 for Problem 22_Square display"<<endl;
        cin>>menuItm;

        //Go to the Problem
        switch(menuItm){
            case 1:{
                cout<<"Inside Problem 1"<<endl;
    //Declare variables
    int num=1;
    int number;
    int sum;
    
    //Input information
    cout<<"Please enter a number greater than 0: ";
    cin>>number;
    while (number<0)
    {
        cout<<"Error: Please enter a number greater than 0: ";
        cin>>number;
    }
    
    //Calculation
    for(int i=1;i<=number;i++){
        sum+=i;
    }
    
    //Display input
    cout<<"The sum is "<<sum<<endl;
                break;
            }
            
            case 2:{
                cout<<"Inside Problem 2"<<endl;
    //Declare variables
    char letter=0; 
    
    //Display output
    for(int i=0; i<=127; i++)
    {
        letter++;
        cout<<letter<<endl;
    }
                break;
            }
            
            case 3:{
                cout<<"Inside Problem C"<<endl;
    //Declare variables
    float Sealvl=0;
    int year=25;
    
    //Display output
    for(int i=1; i<=year; i++)
    {
        Sealvl+=1.5;
        cout<<"Year "<<i<<": "<<Sealvl<<endl;
    }
                break;
            }
            
            case 4:{
                cout<<"Inside Problem 4"<<endl;
    //Declare variables
    float cal=0;
    int minutes=30;
    
    for(int i=1; i<=minutes; i++)
    {
        cal+=3.6;
        
        if(i%5==0)
            cout<<cal<<endl;
     
    }    
                break;
            }
            
            case 5:{
                cout<<"Inside Problem 5"<<endl;
    //Declare variables
    int year=6;
    float membership=2500;
    float rate=0.04;
    
    //Display output
    for(int i=1; i<=year; i++)
        
    {
        membership=membership+(membership*rate);
        cout<<"Year "<<i<<": "<<membership<<endl;
    }
                break;
            }
            
            case 6:{
                cout<<"Inside Problem 6"<<endl;
    //Declare variables
    float speed;
    float time;
    float distance;
        
    //Input information
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    
    while(speed<=0)
    {
        cout<<"It should be greater than 0. Please enter again: ";
        cin>>speed;
    }
        
    cout<<"How many hours has it traveled? ";
    cin>>time;
        
    while(time<1)
    {
            cout<<"It should be greater or equal to 1. Please enter again: ";
            cin>>time;
    }
    cout<<"Hour    Distance Traveled"<<endl;
    cout<<"--------------------------------"<<endl;
    
    //Display output
    for(int i=1;i<=time;i++)
    {
        distance=speed*i;
        cout<<i<<"\t\t"<<distance<<endl;
    }
                break;
            }
            case 7:{
                cout<<"Inside Problem 7"<<endl;
    //Declare variables
    int day=1;
    float money=1.0;
    float Sal_pDay=0.0;
    float total=0.0;
    
    //Input information
    cout<<"Please enter the number of the days: ";
    cin>>day;
     
    while(day<1)
    {
        cout<<"Please enter a number greater or equal to 1: ";
        cin>>day;
    }
    
    //Display output
    for(int i=1; i<=day; i++)
    {
        Sal_pDay=money/100;
        money*=2;
        cout<<"Day "<<i<<": $"<<Sal_pDay<<endl;
        total+=Sal_pDay;
        
    }
    cout<<"The total is $"<<total<<endl;
                break;
            }
            
            case 8:{
                cout<<"Inside Problem 11"<<endl;
    //Declare variables
    float Startnum;
    int days;
    float rate;
    
    //Input information
    cout<<"The starting number of organism: ";
    cin>>Startnum;
    
    while(Startnum<2)
    {
        cout<<"starting number must be greater than 2: ";
        cin>>Startnum;
    }
    
    cout<<"Their average daily population increase: ";
    cin>>rate;
     
    while(rate<0)
    {
        cout<<"average daily population must be greater than 0: ";
        cin>>rate;
    }
    
    cout<<"The number of days they will multiply: ";
    cin>>days;
    
    while(days<1)
    {
        cout<<"the number of days must be greater than 1: ";
        cin>>days;
    }
    
    //Display output
    for(int i=1; i<=days; i++)
    {
        Startnum=Startnum+Startnum*pow(rate,i);
        cout<<"Day "<<i<<": "<<Startnum<<endl;
    }
                break;
            }
            
            case 9:{
                cout<<"Inside Problem 12"<<endl;
    //Declare variables
    float F_tem;
    
    //Display output
    for(int i=1; i<=20; i++)
    {
        F_tem=(9/5)*i+32;
        cout<<i<<"\t"<<F_tem<<endl;
    }           
                break;
            }
            
            case 10:{
                cout<<"Inside Problem 22"<<endl;
                //Declare variables
    int num;
    
    //Input information
    cout<<"Please enter a positive number: ";
    cin>>num;
    
    //Display output
    for(int i=1; i<=num; i++)
    {
        for(int a=1; a<=num; a++)
        {
            cout<<"X";
        }
        cout<<endl;
    }
                break;
            }//End Case
        }//End the Switch/Case
    }while(menuItm>0&&menuItm<=10);//Ends the Do-While Loop

    //Exit Program
    return 0;
}
