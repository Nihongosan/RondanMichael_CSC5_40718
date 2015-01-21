/* 
 * File: Savitch
 * Author: Michael Rondan
 * Purose:Infinite Sequence Approximation for PI
 * Created on January 20, 2015, 8:30 PM
 */
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
const float PI=4*atan(1);
//Function Prototype
int main(int argc, char** argv) {
    //Declare Variables
    float approxPi=1.0f;
    unsigned int terms=1,nTerms;
    //Prompt user for number of terms to use
    do {
        cout<<"How many terms in series to use"<<endl;
        cout<<"Choose an Odd Number integer < 2^32 !"<<endl;
        cin>>nTerms;
    }while(!(nTerms%2));
    //Calculate the approximate value of PI
    for(int denom=3;terms<=nTerms;denom+=4,terms+=2){
        approxPi+=(-1.0f/(denom)+1.0f/(denom+2));
    }
    approxPi*=4;
    //Output the result
    cout<<"Exact value of PI = "<<PI<<endl;
    cout<<"approximate value of PI = "<<approxPi<<endl;
    
    return 0;
}

