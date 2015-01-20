/* 
 * File: Gaddis_7thEd_Chapter3_Prob11
 * Author: Michael Rondan
 * Created on January 19, 2015, 12:47 PM
 * Purpose: bitcoin conversion
*/
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables and initialize
float bcToDlr=211.56; //Jan 19th, 2015 1:17am
float erToDlr=1.16;//Same Date
float ynToDlr=117.61; //Same Date
float bitcoin,dollars,euros,yen;
//Input the number of bitcoin and then convert
cout<<"Input the number of bitcoin "<<endl;
cout<<"You wish to purchase."<<endl;
cin>>bitcoin;
//Convert to all the currencies
dollars=bcToDlr*bitcoin;
euros=erToDlr*dollars;
yen=ynToDlr*dollars;
//Output the results
cout.setf(ios::fixed);
cout.precision(2);
cout<<bitcoin<<" = "<<dollars<<"(dollars)"<<endl;
cout<<bitcoin<<" = "<<euros<<"(euros)"<<endl;
cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
//Exit stage right!
return 0;
}

