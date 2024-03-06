//  cubic.cpp
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

    // example use of using stod to convert a string to an float. Comment or delete once you have understood how to use it.
//    double d = stod("1.238");
//    cout << d << "\n";
//    string s = "1.238";
//    double e = stod(s);
//    cout << e;

    // Your solution goes here...
    cout << "Give me a cubic polynomial in the form\nf(x)=[a]*x^3+[b]*x^2+[c]*x+d\nand I'll return the derivative evaluated at x=2\n";

    string fx,a,b,c;
    double a1,b1,c1,answer;
    size_t startA, endA, startB, endB, startC, endC;
    getline(cin,fx);
    startA = 1 + fx.find("=");
    endA = fx.find("*x^3");
    startB = 4 + endA;
    endB = fx.find("*x^2");
    startC = 4 + endB;
    endC = fx.rfind("*x");
    
    a = fx.substr(startA,(endA-startA));
    b = fx.substr(startB,(endB-startB));
    c = fx.substr(startC,(endC-startC));
    
    a1 = stod(a);
    b1 = stod(b);
    c1 = stod(c);
    
    answer = a1*3*4 + b1*2*2 + c1;
    
    cout << "The derivative evaluated at x=2 is " << answer << "\n";
    return 0;
}
