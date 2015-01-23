/* 
 * File: Gaddis_7thEd_Chap6_Prob11
 * Author: Michael Rondan
 * purpose: Judges scores in star search
 * Created on January 22, 2015, 7:30 PM
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
    //read in the first datapoint
    cout<<"What is Judge #1's score!"<<endl;
    cin>>input;
    avg=max=min=input;
    //For loop to read in the next 4 values
    for(int readin=2;readin<=5;readin++){
        cout<<"What is Judge #"<<readin<<"'s score!"<<endl;
        cin>>input;
        if(max<input)max=input;
        if(max>input)max=input;
        avg+=input;
    }
    //Calculate the average
    avg=(avg-min-max)/3;
    //Output the result
    cout<<"The Average = "<<avg<<endl;
    return 0;
}
