/* 
 * File: Gaddis_7thEd_Chapter3_Prob9
 * Author: Michael Rondan
 * Purpose: Automobile Costs
 * Created on January 19, 2015, 10:18 AM
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
    float Yearly, Mnthly, LoanPrce, InsrncPrce,
        TrPrce, MntncPrce, OilPrce, GasPrce;
    //input the monthly cost for your car loan
    cout<<"input monthly price of your car loan ";
    cin>>LoanPrce ;
    //input monthly cost for your Insurance
    cout<<"input monthly price for car Insurance ";
    cin>>InsrncPrce ;
    //input monthly cost for gas
    cout<<"input monthly price for gas ";
    cin>>GasPrce ;
    //input monthly cost for tires
    cout<<"input monthly price for tires ";
    cin>>TrPrce ;
    //input monthly cost for Oil
    cout<<"input monthly price for Oil ";
    cin>>OilPrce ;
    //input monthly cost for Maintenance 
    cout<<"input monthly price for Maintenance ";
    cin>>MntncPrce ;
    //Display
    Mnthly= LoanPrce+InsrncPrce+GasPrce
            +TrPrce+OilPrce+MntncPrce*12/12;
    Yearly= (LoanPrce+InsrncPrce+GasPrce
            +TrPrce+OilPrce+MntncPrce)*12;
    cout<<"Total Monthly Cost is " << Mnthly << endl;
    cout<<"Total Yearly Cost is " << Yearly << endl;
    return 0;
}

