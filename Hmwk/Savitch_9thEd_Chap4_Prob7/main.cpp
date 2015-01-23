/* 
 * File:   Savitch_9thEd_Chap4_Prob7
 * Author: Michael Rondan
 * purpose: Finding the Difference in Time
 * Created on January 22, 2015, 8:41 PM
 */

#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare variables
    int strHrs,strMins,strIsAm;
    int endHrs,endMins,endIsAm;
    char ap,dummy;
    //Prompt for the start time
    cout<<"Input the Start Time"<<endl;
    cout<<"The Hour, The Minutes and AM or PM"<<endl;
    cin>>strHrs>>strMins>>ap>>dummy;
    cout<<"You Input "<<strHrs<<":"<<strMins<<" "<<ap<<"m"<<endl;
    if(ap=='A'||ap=='a')strIsAm=true;
    //Prompt for the end time
    cout<<"Input the End Time"<<endl;
    cout<<"The Hour, The Minutes and AM or PM"<<endl;
    cin>>endHrs>>endMins>>ap>>dummy;
    cout<<"You Input "<<strHrs<<":"<<endMins<<" "<<ap<<"m"<<endl;
    if(ap=='A'||ap=='a')endIsAm=true;
    //Calculate the minutes for each
    int strTime=strHrs*60+strMins;
    if(!strIsAm)strHrs+=12;
    int endTime=endHrs*60+endMins;
    if(!endIsAm)endHrs+=12;
    int diffMin=endTime-strTime;
    if(diffMin<0)diffMin+=24*60;
    int hrs=diffMin/60;
    int min=diffMin-hrs*60;
    //Output the results
    cout<<"The difference in time is ";
    cout<<(hrs<10?'0':'\0')<<hrs<<":"
        <<(min<10?'0':'\0')<<min<<endl;
    
    return 0;
}

