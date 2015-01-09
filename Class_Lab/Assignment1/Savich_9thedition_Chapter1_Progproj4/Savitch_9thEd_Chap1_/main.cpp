/* 
 * File:   main.cpp
 * Author: Rondan, Michael
 *
 * Created on January 8, 2015, 6:25 PM
 * purpose: homework assignment 1
 */

#include <cstdlib>

using namespace std;

///User Libaries
//Global Constants
//Function Prototypes
//Execution Begins Here!/
int main(int argc, char** argv) {
  //Declare variables
    int op1,op2,sum=0,prod=0;
    //prompt for the two operands
    cout<<"Input 2 integers having a range of [-2^31,2^31-1]"
            cin>>op1>>op2;
    //calculate the sum and product
    sum=sum+op1;
    sum=sum+op2;
    prod=prod*op1;
    prod=prod*op2;
    //output the results
    cout<<op1<<"+"<<op2<<"="<<sum<<endl;
    cout<<op1<<"*"<<op2<<"="<<prod<<endl;
    //Exit stage right!
    return 0;
}

