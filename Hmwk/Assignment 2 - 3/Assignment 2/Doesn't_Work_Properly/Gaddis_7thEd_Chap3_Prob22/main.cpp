/* 
 * File: Gaddis_7thEd_Chap3_Prob22 
 * Author: Michael Rondan
 * Purpose: Word Game
 * Created on January 19, 2015, 11:12 AM
 */
//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables and initialize
char name, age, city, college, profession, 
        animal, pet;

    //input amount of rain in inches
    cout<<"what is your name?";
    cin>>name;
    
    //input amount of rain in inches
    cout<<"what is your age?";
    cin>>age;
    
    //input amount of rain in inches
    cout<<"Name of a city?";
    cin>>city;
    
    //input amount of rain in inches
    cout<<"Name of College?";
    cin>>college;
    
    //input amount of rain in inches
    cout<<"Name a Profession";
    cin>>profession;
    
    //input amount of rain in inches
    cout<<"Name an Animal ";
    cin>>animal;
    
    //input amount of rain in inches
    cout<<"Name your pet ";
    cin>>pet;
    
    //Display
    cout<<"There once was a person named "<<name<<"who lived in "<<city<<
          "at the age of "<<age<<name<<"went to college at "<<college<<
          name<<"graduated and went to work as a "<<profession<<"Then, "<<
          name<<"adopted a "<<animal<<"named "<<pet<<"They "<<
          "both lived happily ever after! "<<endl;
    return 0;        
}

