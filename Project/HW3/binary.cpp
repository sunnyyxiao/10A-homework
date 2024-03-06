//
//  binary.cpp
//  Project
//
//  Created by Sunny Xiao on 10/22/23.
//

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string>
#include <utility>
using namespace std; // Tells computer where to look for various functions

int main(){
    // Your code goes here...
    size_t x,res,n;
    string b;
    cout << "Please enter a positive integer: \n" ;
    cin >> x;
    res = x;
    n = 0;
    b = "";
    
    while (res>0){
        n = res%2;
        res = res/2;
        b = to_string(n) + b;
    }
    
    cout << "Representation in base 2: \n" << b << "\n";

    
    return 0;
}

