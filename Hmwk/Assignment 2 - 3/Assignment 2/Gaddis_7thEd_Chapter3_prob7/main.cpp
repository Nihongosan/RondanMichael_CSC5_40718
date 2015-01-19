/* 
 * File: Gaddis_7thEd_Chap3_prob7
 * Author: Michael Rondan
 * purpose: How many Calories?
 * Created on January 18, 2015, 9:38 PM
 */

#include <iostream>

using namespace std;

//Global Constants


int main(int argc, char** argv)
{
    float calories, CookiesEatn, CalsPrCookie = 75, TotCals;
    //input number of cookies eaten from a bag
    cout<<"input cookies eaten ";
    cin>>CookiesEatn ;
    //Display
    TotCals = (CookiesEatn * CalsPrCookie);
    
    cout<<"your total calories eaten were: " << TotCals << endl;
    
    return 0;
}

