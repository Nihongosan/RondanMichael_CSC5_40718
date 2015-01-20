/* 
 * File: Gaddis_7thEd_Chap3_prob3
 * Author: Michael Rondan
 * purpose: Test Average
 * Created on January 18, 2015, 1:00 PM
 */
//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv)
{  //Declare and Initialize Variables
   int score1, score2, score3, score4, score5, AVG;
    //input test score 1
    cout<<"test score1 = ";
    cin>> score1;
    //input test score 2
    cout<<"test score2 = ";
    cin>> score2;
    //input test score 3
    cout<<"test score3 = ";
    cin>> score3;
    //input test score 4
    cout<<"test score4 = ";
    cin>> score4;
    //input test score 5
    cout<<"test score5 = ";
    cin>> score5;
    //Display
    AVG = (score1 + score2 + score3 + score4 + score5)/5;
    cout << "your average is: " << AVG << endl; 
    return 0;
}

