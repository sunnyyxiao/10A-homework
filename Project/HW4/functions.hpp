//
//  functions.hpp
//  Project
//
//  Created by Sunny Xiao on 10/27/23.
//

#ifndef functions_hpp
#define functions_hpp
#include <string>

using namespace std;

//--------------------------------------------------------------------------------------------
// QUESTION 1:
// PART A)

/**
Gets and returns the number given, if no number is given it returns an error
 @param user_prompt is the prompt for the user
 @return the integer, or if not an integer "there is an error"
 */
int get_int(string user_prompt);

// PART B)
/**
 Computes and tells user if inputted year is a leap year or not
 @param year is the year being checked
 @return true or false based on whether or not the year is a leap year
 */
bool leapyear(int year);


//--------------------------------------------------------------------------------------------
// QUESTION 2:
// PART A)
/**
 Converts all characters from lowercase to uppercase
 @param s is the string of text being converted
 @return the uppercase-d string
 */
string uppercase(string s);

// PART B)

/**
 Converts all characters from uppercase to lowercase
 @param s is the reference to the string of text being converted
 */

void lowercase(string& s);
//--------------------------------------------------------------------------------------------
// QUESTION 3:
// PART A)
size_t vowels_count(string& w);
/**
 Counts the number of vowels in a given string
 @param w is the reference to the string of text being checked for number of vowels
 
 */

// PART B)
void vowels_swap(string& w1, string& w2);
/**
 Swaps the order of the strings of string 2 has more vowels than string 1
 @param w1 is the reference to the first word
 @param w2 is the reference to the second word
 */

#endif /* functions_hpp */
