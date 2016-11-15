/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on October 23, 2016, 10:23 AM
 * Purpose: Project 1 for CSC-5 48102
 * Name of the Game: Password Guessing
 */

#include <cstdlib>  //Get the random passwords
#include <iostream> 
#include <string>   
#include <fstream>  //file I/O
#include <ctime>
using namespace std;
//User libraries

//Global constants

//Function prototypes
void introduce(); //Introduce the whole game
void Easy();      //introduce the easy level
void Normal();    //Introduce the normal level
char genRandom(); //Get the random password with characters and numbers
void outputN1();  //output information for successful user in normal level

int main(int argc, char** argv) {
    //Introduce the game
    introduce();
    
    //Set the random seeds
    //Get the random password for your machine
    srand(static_cast<int>(time(0)));
    
    //Declare variables
    int guess;                                //Guess for Easy level
    int E1;                                   //Random password for easy level
    int tries=1;                              //Chances of guessing in easy level used in for loop
    ofstream outputfile;                      //Output the file to a file
    string guess2,guess3,guess4,guess5,guess6;//Guessing random password for normal level
    int choice;                               //Choice from menu
    
    //Menu
    cout<<"1.  Type 1  for Easy level"<<endl;
    cout<<"2.  Type 2  for Normal level"<<endl;
    cout<<"3.  Type any other button to Quit the game"<<endl;
    cin>>choice;

    //Switch a difficulty
    switch(choice){
        case 1:{
            cout<<"Inside this level"<<endl;
            Easy(); //Easy level introduction
            cout<<"(It might take a little time.Please wait until the direction shows up)"<<endl;
            outputfile.open("Easy.h");       //Open a file "Easy.h"
            //Get a three digit random number which is dividable by 50
            E1=rand()%900+100;               
            while(E1%50!=0){                 //This number which is only dividable by 50
            srand(static_cast<int>(time(0)));//Set a random number
            E1=rand()%900+100;               //This random number has only three digits
            }
            cout<<"Please enter your guess:"<<endl;
            cin>>guess;                      //User enter the first guess
            do{
                tries++;
                if(guess!=E1&&guess>E1){
                    cout<<"\nYou guess is too high"<<endl;
                    cout<<"Please enter again:"<<endl;
                    cin>>guess;
                }
                else if(guess!=E1&&guess<E1){
                    cout<<"\nYou guess is too low"<<endl;
                    cout<<"Please enter again:";
                    cin>>guess;
                }
            }while(tries<5);//User can only guess four times at most while the hints show up
                            //And fives time in total
            if(guess!=E1&&tries>=5){//Game over, and output the following information
                cout<<"\nThe password is "<<E1<<endl;//Show the right password
                cout<<"You ran out of all chances"<<endl;
                cout<<"This machine will shut down forever. Just buy a new one.\n\n";
            } //Tries>=7. User ran out of all chances, and game over  

            if(E1==guess){//User find the password, and output the following information
                cout<<"\nWell done! You find the password!"<<endl;
                cout<<"Now writing the password to a file ";
                cout<<"so you can print it out in case you forget the password."<<endl;
                outputfile<<"Here is the password,you can print it out:"<<endl;
                outputfile<<E1<<endl;
                cout<<"Writing finished.\n\n";
            }
                outputfile.close();//Close the file
                break;
        }

        //Normal level begins!
        case 2:{
            cout<<"Inside this level"<<endl;
            Normal();      
            srand(time(0));  //Random password with numbers and characters
            std::string N1;
            for(int i = 1; i<=2; i++)
            {
                N1+= genRandom();
            }//Get the random password
            cout<<"Please enter your guess: ";
            cin>>guess2;//User enter his/her guess
            if(guess2!=N1){
                if(guess2[guess2.length()-1]!=N1[N1.length()-1]){
                    cout<<"Wrong, please continue your guessing: ";
                    cin>>guess3;//user enter the guess again
                    if(guess3==N1){//User find the right password 
                            outputN1();
                            outputfile.open("Easy.h");
                            outputfile<<"Here is the password,you can print it out:"<<endl;
                            outputfile<<N1<<endl;//Output password to the file
                            outputfile.close(); 
                            return 0;
                    }//Close the file, writing finished
                    if(guess3[guess3.length()-1]==N1[N1.length()-1]){//If the last digit is right in guess3
                        cout<<"The last digit is right, please continue guessing: "<<endl;
                        cin>>guess4;
                    }               
                    if(guess3[guess3.length()-1]!=N1[N1.length()-1]){//If the last digit is not right,
                        cout<<"Here is a hint."<<endl;               //the machine will show hint
                        cout<<"The last digit is "<<N1[N1.length()-1]<<endl;  
                        cout<<"Please continue guessing:"<<endl;
                        cin>>guess4;
                    }
                }
                else if(guess2[guess2.length()-1]==N1[N1.length()-1]){//If the last digit is right in guess2
                        cout<<"The last digit is right, please continue guessing: "<<endl;
                        cin>>guess4;
                }
                if(guess4==N1){
                    outputN1();
                    outputfile.open("Easy.h");
                    outputfile<<"Here is the password,you can print it out:"<<endl;
                    outputfile<<N1<<endl;//Output password to the file
                    outputfile.close();  //Close the file, writing finished
                    return 0;
                }    
                if(guess4!=N1){//If the guessing is wrong, continue showing hint
                    char f=N1.at(N1.length()-2);
                    if(f>='0'&&f<='9') {//The category of first digit(number)
                        cout<<"\nThe first digit is a number."<<endl;
                    }
                    else if(f>='a'&&f<='z'){//The category of first digit(character)
                        cout<<"\nThe first digit is a character."<<endl;   
                    }  
                    cout<<"Please continue your guessing: ";
                    cin>>guess5;
                    if(guess5==N1){//User find the right password directly
                        outputN1();
                        outputfile.open("Easy.h");
                        outputfile<<"Here is the password,you can print it out:"<<endl;
                        outputfile<<N1<<endl;//Output password to the file
                        outputfile.close();//Close the file, writing finished
                        return 0;
                    }//Congratulations to user for finding the password
                    if(guess5!=N1){ //If the guessing is still wrong
                        if(f>='0'&&f<='5'){//range of first digit
                            cout<<"\nWrong, and the range is form 0 to 5."<<endl;
                            cout<<"Please continue your guessing: ";
                            cin>>guess6;
                            }
                        if(f>='6'&&f<='9'){//range of first digit
                            cout<<"\nWrong, and the range is from 6 to 9."<<endl;
                            cout<<"Please continue your guessing: ";
                            cin>>guess6;
                            }
                        if(f>='a'&&f<='f'){//range of first digit
                            cout<<"\nWrong, and the domain is {a,b,c,d,e,f}."<<endl;
                            cout<<"Please continue your guessing: ";
                            cin>>guess6;
                        }
                        if(f>='g'&&f<='l'){//range of first digit
                            cout<<"\nWrong, and the domain is from {g,h,i,j,k,l}."<<endl;
                            cout<<"Please continue your guessing: ";
                            cin>>guess6;
                        }
                        if(f>='m'&&f<='s'){//range of first digit
                            cout<<"\nWrong, and the domain is {m,o,p,q,r,s}."<<endl;
                            cout<<"Please continue your guessing: ";
                            cin>>guess6;
                        }
                        if(f>='t'&&f<='z'){//range of first digit
                            cout<<"\nWrong, and the range is from {t,u,v,w,x,y,z}."<<endl;
                            cout<<"Please continue your guessing: ";
                            cin>>guess6;
                        }
                    }
                        if(guess6==N1){
                            outputN1();
                            outputfile.open("Easy.h");
                            outputfile<<"Here is the password,you can print it out:"<<endl;
                            outputfile<<N1<<endl;//Output password to the file
                            outputfile.close();//Close the file, writing finished
                            return 0;
                        }
                        if(guess6!=N1){//Game over, and output the following 
                            cout<<endl;
                            cout<<"\nYou ran out of chances."<<endl;
                            cout<<"The password is "<<N1<<endl;
                            cout<<"This machine will shut down forever. Just buy a new one.\n\n";
                        }
                }
            }
            if(guess2==N1){//User find the right password directly(guess2)
                        outputN1();
                        outputfile.open("Easy.h");
                        outputfile<<"Here is the password,you can print it out:"<<endl;
                        outputfile<<N1<<endl;//Output password to the file
                        outputfile.close();//Close the file, writing finished
            }//Congratulations to user for finding the password
        }
    }
    return 0;
}
void introduce()
{
    cout<<"************************************************************\n";
    cout<<"**       Welcome to the Passwords Guessing Game           **\n";
    cout<<"**    This game is to find password for your machine      **\n";
    cout<<"**            If you run out of chances                   **\n";
    cout<<"**         The machine will shut down forever             **\n";
    cout<<"**   There are two levels of difficulties in this game    **\n";
    cout<<"**                E for easy, N for normal                **\n";
    cout<<"**      Easy level is three digits password  with nums    **\n";
    cout<<"** Normal level is two digits password with nums and chars**\n";
    cout<<"**            when you find the password                  **\n";
    cout<<"** password will output to a file, so you can print it out**\n";
    cout<<"************************************************************\n\n";         
}
void Easy()//Function prototype(introduce easy level)
{
    cout<<"\nYou choose difficulty easy\n";
    cout<<"You will guess a three digits password which is divisible by 50 with only numbers.\n";
    cout<<"The machine will show you your guess is too low or too high."<<endl;
    cout<<"You have five chances to guess. Now begin!"<<endl;
}
void Normal()//Function prototype(introduce normal level)
{
    cout<<"You choose difficulty normal\n";
    cout<<"You will guess a two digits password with numbers and characters";
    cout<<"The machine will show you hints."<<endl;
    cout<<"After all the hints show up, you have only one chance to find it. Now begins!"<<endl;
}
char genRandom()//Function prototype(get the random password for normal level)
{
    const int SIZE=36;
    char N1password[SIZE] ={'0','1','2','3','4','5','6','7','8','9','a','b',
                            'c','d','e','f','g','h','i','j','k','l','m','n',
                            'o','p','q','r','s','t','u','v','w','x','y','z'};//This ramdom password consists of 0-9 and a-z
    int stringLength=sizeof(N1password)-1;
    return N1password[rand()%stringLength];
}
void outputN1(){//Function Prototype(output information when user find the right password)
    cout<<"Well done!! You find the password!"<<endl;
    cout<<"Now writing the password to a file";
    cout<<" so you can print it out in case you forget the password."<<endl;
}