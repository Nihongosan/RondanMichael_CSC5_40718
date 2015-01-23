/* 
 * File: Gaddis_7thEd_Chap6_Prob11
 * Author: Michael Rondan
 * Purpose: Averaging Judge scores on Starsearch
 * Created on January 23, 2015, 1:14 PM
 */
//System Library
#include <iostream>

using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    float avg, min, max, input;
    //Read in the first datapoint
    cout<<"score must be 1<=10"<<endl;
    cout<<"What is Judge #1's score!"<<endl;
    cin>>input;
    avg=max=min=input;
    //For loop to read in the next 4 values
    for(int readin=2;readin<=5;readin++){
        cout<<"What is Judge #"<<readin<<"'s score!"<<endl;
        cin>>input;
        if(max<input)max=input;
        if(min>input)min=input;
        avg+=input;
    }
    //Calculate the average
    avg=(avg-min-max)/3;
    //Output the result
    cout<<"The average score is "<<avg<<endl;
    //Exit Stage Right!
return 0;
}