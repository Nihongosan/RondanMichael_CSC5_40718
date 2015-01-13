/* File:gaddis prob 11
 * Author:Rondan, Michael
 * Created on January 8, 2015, 7:25 PM
 * purpose:homework assignment 2
 */
//system libraries
#include <iostream>
#include <iomanip>
using namespace std;

///User Libraries

//Global Constants
const unsigned short CVFTACS=43560;//percent conversion

//Function Prototypes

//Execution Begins Here

int main(int argc, char** argv) {
    //Declare and Initialize variables
    float gasTank=20;//max gallons in our gas tank
    float inTown=21.5;//In town miles per gallon
    float onHway=26.8;//Highway miles per gallon
    //calculate the total miles in and out of town
    float disTown=gasTank*inTown;
    float disHway=gasTank*onHway;
    //Output the results
    cout<<"Distance in Town on a tank of gas = "<<endl;
    cout<<disTown<<"(miles)"<<endl;
    cout<<"Distance on Highway with a tank of gas = "<<endl;
    cout<<disHway<<"(miles)"<<endl;
    return 0;
}

