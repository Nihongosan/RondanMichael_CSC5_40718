/* File: Gaddis_7thEd_Chap4_prob5
 * Author: Michael Rondan
 * purpose: Body Mass Index
 * Created on January 19, 2015, 5:30 PM
 */
//System Libraries
#include <iostream>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv)
{//Execution Begins Here!
    int weight, height, BMI;
    cout<<"enter weight in pounds ";
    cin>> weight;   
    cout<<"enter height in inches ";
    cin>> height;
    BMI=(weight * 703)/pow(height, 2.0);
    cout<<"Your BMI is "<<BMI<<endl;
    return 0;
}

