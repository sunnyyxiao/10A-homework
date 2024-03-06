//
//  functions.hpp
//  Project
//
//  Created by Sunny Xiao on 11/6/23.
//

#ifndef functions_hpp
#define functions_hpp

using namespace std;


void print_vec(const vector<int>& v);
void print_vec(const vector<double>& v);
void print_vec(const vector<bool>& v);

//--------------------------------------------------------------------------------------------
// QUESTION 1:
void reverse_vec(vector<int>& v);
void reverse_vec(vector<double>& v);
void reverse_vec(vector<bool>& v);
/**
Reverses order of components of vector
 @param v is the reference to the vector whose components are being reversed, depending on the type of vector (int, double, bool)
 */

//--------------------------------------------------------------------------------------------
// QUESTION 2:
vector<int> concatenate_int_vec(const vector<int>& v1, const vector<int>& v2, bool b);
/**
Concatenates strings depending on whether a boolean is true or false (if true, elements of v1 are displayed before v2, but if false, elements of v2 are displayed before v1)
 @param v1 is the reference to a vector of type integer that is being combined with another
 @param v2 is the reference to a vector of type integer that is being combined with another
 @param b is the boolean that determines the order in which the two vectors are concatenated
 @return the concatenated vector that contains v1 and v2 components combined, in the desired order
 */

//--------------------------------------------------------------------------------------------
// QUESTION 3:
// Part A)
void zero_buff(vector<bool>& v, size_t K);
/**
Adds a certain amount of zeroes to the end of the boolean vector based on the number that the user inputs, modifies existing vector
 @param v is the reference to a vector of type boolean that is the initial vector and is modified
 @param K is the unsigned integer that is the number of 0's the user wants to add to the end of the vector
 */

// Part A)
vector<bool> binary_add(vector<bool> v1, vector<bool> v2);
/**
Returns a vector of type boolean, which is the result of a binary addition between two vectors of possibly varying sizes
 @param v1 is the first boolean vector that is being added to another
 @param v2 is the second boolean vector that is being added to the other
 @return the resultant vector of type boolean after adding the two together through binary addition
 */

#endif /* functions_hpp */

