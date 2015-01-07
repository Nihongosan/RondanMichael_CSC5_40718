/* 
 * File:   main.cpp
 * Author: Christopher Avalos
 * Created on January 6, 2015, 10:30 AM
 * PurposeL Hmwk, Solution to free fall problem
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const float GRAVITY=32.174;//ft/sec^2

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    unsigned int time;//(secs)
    float dist;//distance (ft)
    //Prompt user for input
    cout<<"This program calcualtes free fall"<<endl;
    cout<<"Distance dropped in feet with an"<<endl;
    cout<<"Object starting at rest"<<endl;
    cout<<"Input the free-fall time to drop in seconds"<<endl;
    cout<<"The time input is a positive integer"<<endl;
    cin>>time;
    //Calculate the distance dropped
    dist=1.0/2*GRAVITY*time*time;
    //Output the results
    cout<<"Distance dropped = "<<dist<<" (ft)"<<endl;
    //Exit stage right

    return 0;
    
}

