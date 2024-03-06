//
//  fibonacci.cpp
//  Project
//
//  Created by Sunny Xiao on 10/22/23.
//

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <cmath> // Includes useful math functions
using namespace std; // Tells computer where to look for various functions

int main(){
    // Your code goes here...
    
    cout << "Enter a positive integer: ";
    int x,a,b,c,primeSum;
    cin >> x;
    a = 1; b = 1; c = 2; primeSum = 0;
    
    for (int i = 3; i <=x; i++){
        c = b + a;
        bool isPrime = true;
        int primeNum = 2;
        for (; primeNum <=(c/2); primeNum++){
            if (c%primeNum == 0){
                isPrime = false;
                cout << "Checking if " << c << " is prime... " << c << " is not a prime Fibonacci as is divisible by " << primeNum << "\n";
                break;
            }
        }
        if (isPrime == true){
            cout << "Checking if " << c << " is prime... " << c << " is a prime Fibonacci\n";
            primeSum = primeSum + c;
        }
        a = b;
        b = c;
    }
    
    cout << "Sum of the Fibonacci primes less than or equal to the Fibonacci number with index " << x << ": " << primeSum << "\n";
    
    
    return 0;
}

