/* 
 * File: Gaddis_7thEd_Chap4_Prob16
 * Author: Michael Rondan
 * Purpose: Fat Gram Calculator
 * Created on January 19, 2015, 6:01 PM
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
    int   calories, fatgrams;
    cout<<"enter amount of grams of fat ";
    cin>>fatgrams;   
    calories = fatgrams * 9;
    cout<<"your calories arwe "<<calories<<endl;    
    return 0;
}

