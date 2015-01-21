/* 
 * File: Savitch
 * Author: Michael Rondan
 * Purose:Using RNG to Approximation for PI on a dart board
 * Created on January 20, 2015, 8:53 PM
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries

//Global Constants
const float PI=4*atan(1);
const unsigned int MAXRAND=pow(2,31);

//Function Prototype

int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //How many darts do you want to throw
    unsigned int nDarts,inCircl=0;
    //Prompt the User

    do{
        cout<<"This is a dart game"<<endl;
        cout<<"How many darts do you want to throw?"<<endl;
        cout<<"0 to 10^6"<<endl;
        cin>>nDarts;
    }while (nDarts>1000000);
    //Play the Game throw the darts
    for(int dart=1;dart<=nDarts;dart++){
        float x=1.0f*rand()/MAXRAND;//(0,1) x coordinate
        float y=1.0f*rand()/MAXRAND;//(0,1) y coordinate
        if(x*x+y*y<=1)inCircl++;
    }
    //Calculate the approximate value of Pi
    float approxPi=4.0f*inCircl/nDarts;
    //Output the results
    cout<<"The exact value of pi = "<<PI<<endl;
    cout<<"The approximate value of pi = "<<approxPi<<endl;
    
    return 0;
}