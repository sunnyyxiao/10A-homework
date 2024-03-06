//
//  list.cpp
//  Project
//
//  Created by Sunny Xiao on 10/22/23.
//

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string> // Allows certain string operations, for later in the course
#include <cmath> // Includes a load of useful math functions
using namespace std; // Tells computer where to look for various functions

int main(){
    // Your code goes here...
    int x,large,small;
    char cont = 'y';
    while (cont != 'n'){
        cout << "Please enter a list of integers:\n";
        cin >> large;
        small = large; char ch = cin.peek();
        while (ch != '\n'){
            cin >> x;
            if (x > large){
                large = x;
            }
            if (x < small){
                small = x;
            }
        ch = cin.peek(); cout << "next character is " << ch << " !!" <<endl;
        }
        cout << "Largest: " << large << "\n";
        cout << "Smallest: " << small << "\n";
        cout << "Do you want to continue [y/n]? ";
        cin >> cont;
    }

    return 0;
}

