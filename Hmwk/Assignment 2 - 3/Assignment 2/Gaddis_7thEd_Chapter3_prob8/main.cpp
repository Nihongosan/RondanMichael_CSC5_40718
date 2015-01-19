/* 
 * File:   main.cpp
 * Author: micha_000
 *
 * Created on January 19, 2015, 9:12 AM
 */

#include <iostream>

using namespace std;

//Global Constants


int main(int argc, char** argv)
{
    float BuildPrce, Insurance;
    //input cost to replace your building
    cout<<"input replacement price for a building ";
    cin>>BuildPrce ;
    //Display
    Insurance = (BuildPrce * .8);
    
    cout<<"minimum advised cost of insurance is " << Insurance << endl;
    
    return 0;
}

