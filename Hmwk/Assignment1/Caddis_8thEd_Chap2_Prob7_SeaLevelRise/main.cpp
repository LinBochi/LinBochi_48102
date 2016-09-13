/* 
 * File:   main.cpp
 * Author: Bochi Lin
 * Created on September 13, 2016, 11:52 AM
 * Purpose: To calculate when homeowner in Riverside will have beach front property 
 */

#include <iostream>

using namespace std;
const float CNVMMFT=304.8;//Conversion milimeters to feet from Google
const float CNVMMM=1000;
int main(int argc, char** argv) {

    //Declare of variables
    float rate=1.5;//Sea level rise rate in mm/year
    int nYear1=5,nYear2=7,nYear3=10;//Years to calculate rise
    float rise1,rise2,rise3;//Solutions for the 3 years from above
    int nYrBch;//Number of years before your home is beach front property
    float elevRiv=860;//Elevation of Riverside in feet according to wikipedia
    
//Process values -> Map inputs to Output
    rise1=rate*nYear1;
    rise2=rate*nYear2;
    rise3=rate*nYear3;
    nYrBch=elevRiv/rate*CNVMMFT;

    
    //Display Output   
    cout<<"THe rate of seal level rise = "<<rate<<"mm/year"<<endl;
    cout<<"After "<<nYear1<<" years the sea will rise "<<rise1<< "mm"<<endl;
    cout<<"After "<<nYear2<<" years the sea will rise "<<rise2<< "mm"<<endl;
    cout<<"After "<<nYear3<<" years the sea will rise "<<rise3<< "mm"<<endl;
    cout<<"At this rate Riverside won't have beach front property for ";
    cout<<nYrBch<<"years"<<endl;
    cout<<"This rise equates to "<<nYrBch*rate/CNVMMM<<"meters"<<endl;
return 0;
}

