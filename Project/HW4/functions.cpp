//
//  functions.cpp
//  Project
//
//  Created by Sunny Xiao on 10/27/23.
//

#include "functions.hpp"
#include <string>
#include <cmath>
#include <iostream>
using namespace std;

//--------------------------------------------------------------------------------------------
// QUESTION 1:
// PART A)
int get_int(string user_prompt){
    cout << user_prompt;
    int i;
    cin >> i;
    if (cin.fail()){
        cout << "There was an error reading your number.\n";
        return 0;
        
    }else {
        return i;
    }
}

// PART B)
bool leapyear(int year){
    if (year%4 == 0){
        if (year%100 == 0 && year%400 != 0){
            return false;
        } else return true;
    } else return false;
}


//--------------------------------------------------------------------------------------------
// QUESTION 2:
// PART A)
string uppercase(string s){
    for (size_t index = 0; index <= (s.length()-1); index++){
        if (s[index] >= 97 && s[index] <= 122){
            s[index] = s[index] - 32;
        }
    }
//    for (size_t index = 0; index <= (s.length()-1); index++){
//        if (s[index] >= 'a' && s[index] <= 'z'){
//            s[index] = s[index] - ' ';
//        }
//    }
    return s;
}

// PART B)
void lowercase(string& s){
    for (size_t index = 0; index <= (s.length()-1); index++){
        if (s[index] >= 65 && s[index] <= 90){
            s[index] = s[index] + 32;
        }
    }
}

//--------------------------------------------------------------------------------------------
// QUESTION 3:
// PART A)
size_t vowels_count(string& w){
    size_t numVowels = 0;
    for (size_t index = 0; index < w.length(); index++){
        char c = w[index];
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            numVowels+=1;
    }
    return numVowels;
}

// PART B)
void vowels_swap(string& w1, string& w2){
    size_t v1 = vowels_count(w1);
    size_t v2 = vowels_count(w2);
    if (v2>v1){
        string wtemp = w1;
        w1 = w2;
        w2 = wtemp;
    }
}
