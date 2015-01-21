/* 
 * File: Gaddis_7thEd_Chap5_Prob7
 * Author: Michael Rondan
 * Purpose: Doubling Pennies 
 * Created on January 20, 2015, 7:45 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototype
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int salary=1;//Integer number of Pennies
    unsigned int totpay=salary;//Total Pay after n days
    unsigned short numDays;//Number of days to double your wallet
    //Output the number of days to double your wallet
    cout<<"How many days to double the contents of your salary"<<endl;
    cout<<"your salary starts with $0.01"<<endl;
    cout<<"Maximum days allowed = 30 "<<endl;
    cin>>numDays;
    cout<<fixed<<setprecision(2)<<showpoint;
    //Calculate the result

    for(int day=2;day<=numDays;day++) {
        salary*=2;
        totpay+=salary;
        cout<<"On your first day";
        cout<<" your salary = $"<<salary/100.0f<<endl;
        cout<<"After "<<day<<" days ";
        cout<<" your salary =   $"<<salary/100.0f<<endl;
    }

    return 0;
}

