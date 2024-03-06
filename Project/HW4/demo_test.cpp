//
//  demo_test.cpp
//  Project
//
//  Created by Sunny Xiao on 10/27/23.
//

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string> // Allows certain string operations
#include <cmath> // Includes a load of useful math related functions like round, max etc.
#include "functions.hpp"

//using namespace std; // "Tells computer where to look for various functions"


int main(){
    // Question 1:
    cout << "QUESTION 1:\n";
    string prompt = "Enter a year and I will tell you if it a leap year or not: ";
    int year = get_int(prompt);
    if (year != 0){
        bool leap = leapyear(year);
        if (leap){
            cout << year << " is a leap year!\n";
        }
        else{
            cout << year << " is not a leap year.\n";
        }
    }
    
    // Question 2:
    cout << "\nQUESTION 2:\n";
    string s = "hello, isn't programming great! i'm having a lot of fun abcpoisnji10989IEH  adifj0-2=";
    cout << s + "\n";
    s = uppercase(s);
    cout << s+ "\n";
    lowercase(s);
    cout << s+ "\n";
    
    
    // Question 3:
    cout << "\nQUESTION 2:\n";
    string word1 = "aidnckzouier";
    string word2 = "aidnckzouier";
    size_t vowels1 = vowels_count(word1);
    size_t vowels2 = vowels_count(word2);
    cout << word1 << " has " << vowels1 << " vowels, " << word2 << " has " << vowels2 << " vowels.\n";
    vowels_swap(word1, word2);
    if (vowels1 == vowels2){
        cout << word1 << " and " << word2 << " have the same number of vowels!\n";
    }
    else{
        cout << word1 << " has more vowels than " << word2 << "!\n";
    }
    
    return 0;
}

