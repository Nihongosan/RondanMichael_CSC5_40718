/* 
 * File: Gaddis_7thEd_Chap5_Prob7
 * Author: michael Rondan
 * Purpose: Show Exponential Increases by Doubling
 * Created on January 23, 2015, 12:25 PM
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
    unsigned int salary=1;//Integer number of pennies
    unsigned int totPay=salary;//Total pay after n days
    unsigned short numDays;//Number of days to double
    //Output the number of days to double your wallet
    cout<<"How many days to double your salary?"<<endl;
    cout<<"Your salary starts with $0.01"<<endl;
    cout<<"Maximum days allowed = 30"<<endl;
    cin>>numDays;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"On the first day ";
    cout<<" your salary = $"<<setw(11)<<salary/100.0f<<endl;
    //Calculate the result
    for(int day=2;day<=numDays;day++){
        //salary*=2;
        salary<<=1;
        totPay+=salary;
        cout<<"After "<<setw(2)<<day<<" days ";
        cout<<" your salary = $"<<setw(11)<<salary/100.0f<<endl;
}
//Output the result
cout<<"After "<<setw(2)<<numDays<<" days ";
cout<<" your tot pay =$"<<setw(11)<<totPay/100.0f<<endl;
//Exit Stage Right!
return 0;
}

