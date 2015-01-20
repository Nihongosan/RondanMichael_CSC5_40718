/* File: Gaddis_7thEd_Chap4_prob1
 * Author: Michael Rondan
 * purposes: Minimum/Maximum
 * Created on January 19, 2015, 2:52 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv)
{//Execution Begins Here!
    int a, b;
    a = b = 0;
    cout<<"enter a number: ";
    cin>> a;   
    cout<<"enter a second number: ";
    cin>> b; 
    cout<<"Largest: "<<((a > b)? a : b) <<"Smallest: " <<
            ((a < b)? a : b)<<endl;
    
    return 0;
}

