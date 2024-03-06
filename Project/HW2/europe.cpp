//
//  europe.cpp
//  pic10A
//
//  Created by Sunny Xiao on 10/13/23.
//
// Problem 1

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string> // Allows certain string operations, for later in the course
#include <cmath> // Includes a load of useful functions like round that we will demonstrate
#include <iomanip> // Include so as to be able to change the way numbers are represented
using namespace std; // "Tells computer where to look for various functions"

int main(){
    
    cout << "Please enter the money in the European convention (commas): \n";
    string moneyEuro,dollars,cents;
    size_t lengthOfMoney,commaIndex;
    cin >> moneyEuro;
    lengthOfMoney = moneyEuro.length();
    commaIndex = moneyEuro.find(',');
    
    dollars = moneyEuro.substr(0,commaIndex);
    cents = moneyEuro.substr((commaIndex+1),(2));
    
    cout << "The money in the English-speaking convention (period) is: \n";
    cout << dollars << "." << cents << "\n";
    
    return 0;
}
