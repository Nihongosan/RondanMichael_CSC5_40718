/* File: Gaddis_7thEd_Chap4_prob4
 * Author: Michael Rondan
 * purpose: Running the Race
 * Created on January 19, 2015, 4:36 PM
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
    int width, length, width1, length1, area, area1;
    cout<<"enter length in inches ";
    cin>> length;   
    cout<<"enter width in inches ";
    cin>> width;
    cout<<"enter second length in inches ";
    cin>> length1;   
    cout<<"enter second width in inches ";
    cin>> width1;
    area = (length * width);
    area1 = (length1 * width1);
    cout<<"Greater: "<<((area > area1 )? area : area1) <<"Smaller: " <<
          ((area < area1)? area : area1)<<endl;
    return 0;
}


