/* File: Gaddis_7thEd_Chap4_prob14
 * Author: Michael Rondan
 * purpose: Running the Race
 * Created on January 19, 2015, 5:47 PM
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
    int spd, spd2, spd3;
    cout<<"enter time for racer 1 ";
    cin>> spd;   
    cout<<"enter time for racer 2 ";
    cin>> spd2;
    cout<<"enter time for racer 3 ";
    cin>> spd3;   
    cout<<"first: "<<(spd > spd1 > spd2 ) 
        <<"Second: " <<(spd < spd1 < spd2)<<endl;
    <<"third: "<<(spd > spd1 < spd2 )
    return 0;
}

