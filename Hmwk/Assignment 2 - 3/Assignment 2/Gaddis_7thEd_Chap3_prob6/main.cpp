/* File: Gaddis_7thEd_Chap3_prob6
 * Author: Michael Rondan
 * purposes: How many Widget?
 * Created on January 18, 2015, 9:16 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv)
{//Declare and Initialize Variables
 float wdgs, paletWt, loadWt, WdgWt=9.2;
    //input weight of the pallet by itself
    cout<<"input weight of pallet separately in lbs ";
    cin>> paletWt;
    //input weight of pallet with load of widgets
    cout<<"input weight of pallet and cargo in lbs ";
    cin>> loadWt;
    //Display
    wdgs = (loadWt - paletWt)/(WdgWt);
    
    cout<<"your amount of widgets are: " << wdgs << endl;
    
    return 0;
}

