//
//  digits.cpp
//  pic10A
//
//  Created by Sunny Xiao on 10/13/23.
//


#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string> // Allows certain string operations, for later in the course
#include <cmath> // Includes a load of useful functions like round that we will demonstrate
#include <iomanip> // Include so as to be able to change the way numbers are represented
using namespace std; // "Tells computer where to look for various functions"

int main(){
    
    // Your solution goes here...
    
    cout << "Please enter an integer from 0 to 9: \n";
    string s = "zero one  two  threefour five six  seveneightnine";
    string intName;
    int i;
    cin >> i;
    intName = s.substr((i*5),5);
    cout << intName << "\n";
    return 0;
}

