/* 
 * File: Gaddis_7thEd_Chap5_Prob12
 * Author: Michael Rondan
 * Purpose: Fahrenheit to Celsius 
 * Created on January 20, 2015, 6:43 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototype
int main(int argc, char** argv) {
    //Declare Variables
    int f1=32,f2=212;
    float c1=0,c2=100;
    float cEqua,cInterp;
    //Loop to create a table
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Fahrenheit Eq Celsius  Interp Celsius";
    for(int fahr=f1;fahr<=f2;fahr+=20){
        cEqua=5.0/9.0*(fahr-32);
        cInterp=c1+(c2-c1)/(f2-f1)*(fahr-f1);
                cout<<setw(6)<<fahr<<setw(14)<<cEqua<<setw(10);
    }
   
    //Exit Stage Right!
    return 0;
}