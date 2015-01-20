/* 
 * File: Gaddis_7thEd_Chap3_prob1
 * Author: Michael Rondan
 * purpose: Mileage
 * Created on January 18, 2015, 1:33 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) 
{   //Declare and Initialize Variables
    int gallons,miles,MPG;
    //input max Gallons in the tank
    cout << "how many gallons? ";
    cin >> gallons;
    //Miles per Gallon?
    cout << "How many miles can you go on a tank? ";
    cin >> miles;
    //Mileage
    MPG = miles/gallons;
    //Display
    cout << "your Miles per gallon is " << MPG << endl;
    return 0;
}

