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
 const char CONVPCT=100;//percent conversion
//Function Prototypes
//Execution Begins Here
 int main(int argc, char** argv) {
    //declare and initialize variables
    float skprice=2.177e1f;//stock price in $'s
    unsigned short nshares=600;//number of shares of stock
    char comish=2;//2 percent sales commission
    //calculate sales price, commission and total in $'s
    float slPrice=nshares*skprice;
    float cmPrice=slPrice*comish/CONVPCT;
    float totPaid=slPrice+cmPrice;
    //output the results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Sales Price = $"<<setw(8)<<slPrice<<endl;
    cout<<"Commission  = $"<<setw(8)<<cmPrice<<endl;
    cout<<"Total Paid  = $"<<setw(8)<<totPaid<<endl;
    //Exit stage right!
    return 0;
 }

