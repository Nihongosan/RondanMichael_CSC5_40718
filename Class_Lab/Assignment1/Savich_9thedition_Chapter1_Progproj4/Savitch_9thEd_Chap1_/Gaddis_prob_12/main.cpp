/* File:gaddis prob 17
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
   //declare variables
   float inSqFt,outAcrs;
   //prompt for input
   cout<<"Input the number of square feet"<<endl;
   cout<<"to convert to Acres"<<endl;
   cin>>inSqFt;
   //calculate Acres
   outAcrs=inSqFt/CVFTACS;
   //output the results
   cout<<inSqFt<<"(Sq feet) = ";
   cout<<outAcrs<<"(Acres)"<<endl;
   //Exit stage right!
   return 0;
}