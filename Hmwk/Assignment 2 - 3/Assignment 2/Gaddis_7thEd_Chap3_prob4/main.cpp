/* 
 * File: Gaddis_7thEd_Chap3_prob4
 * Author: Michael Rondan
 * purpose: Average rainfall
 * Created on January 18, 2015, 5:46 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
 float rain1, rain2, rain3, in, is, AVG;
    //input amount of rain in inches
    cout<<"input amount of rain in inches ";
    cin>> rain1;
    //input amount of rain in inches
    cout<<"input amount of rain2 in inches ";
    cin>> rain2;
    //input amount of rain in inches
    cout<<"input amount of rain3 in inches ";
    cin>> rain3;
    
    //Display
    AVG = (rain1 + rain2 + rain3)/3;
    
    cout<<"The average rainfall is " << AVG << endl;
    
    return 0;
}

