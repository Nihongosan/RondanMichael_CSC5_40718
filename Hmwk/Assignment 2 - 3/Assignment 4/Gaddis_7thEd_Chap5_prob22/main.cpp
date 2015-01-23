/* 
 * File: Gaddis_7thEd_Chap5_Prob22
 * Author: Michael Rondan
 *
 * Created on January 20, 2015, 6:43 PM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //Declare a Variable
    int widHght;
    //Prompt for the input
    cout<<"How large do you want the character square";
    cin>>widHght;
    //Utilize countable loops
    for(int row=1;row<=widHght;row++){
        for(int col=1;col<=2*widHght;col++){
            cout<<"X";
        }
        cout<<endl;
    }
    cout<<endl;
    //Exit Stage Right!
    return 0;
}

