/* 
 * File: Gaddis_7thEd_Chap4_Prob12
 * Author: Michael Rondan
 * Purpose: Fahrenheit and Celsius Conversion Table
 * Created on January 23, 2015, 10:15 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries
//Global Constants
//Function Prototype
//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    short f1=32,f2=212;
    float c1=0,c2=100;
    float cEqua,cInterp;
    //Loop to Create a table
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Fahrenheit Eq Celsius Interp Celsius"<<endl;
    for(int fahr=f1;fahr<=f2;fahr+=10){
        cEqua=5.0f/9.0*(fahr-32);
        cInterp=c1+(c2-c1)/(f2-f1)*(fahr-f1);
        cout<<setw(6)<<fahr<<setw(14)<<cEqua<<setw(15)<<cInterp<<endl;
}
return 0;
}