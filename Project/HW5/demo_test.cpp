//
//  demo_test.cpp
//  Project
//
//  Created by Sunny Xiao on 11/6/23.
//

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string> // Allows certain string operations
#include <cmath> // Includes a load of useful math related functions like round, max etc.
#include <vector> // Allows us to use vectors
#include "functions.hpp"

//using namespace std; // "Tells computer where to look for various functions"


int main(){
    {
        // QUESTION 1 DEMONSTRATION
        cout << "\nQUESTION 1\n";
        vector<int> v1 = {1,2,3,4,5,6,7};
        vector<double> v2 = {1.2, 2.4,-3.2,0.75,1.0};
        vector<bool> v3 = {0,1,0,0,0};
        
        cout << "Integer vector before being reversed: \n";
        print_vec(v1);
        cout << "Integer vector after being reversed: \n";
        reverse_vec(v1);
        print_vec(v1);
        
        cout << "Double vector before being reversed: \n";
        print_vec(v2);
        cout << "Double vector after being reversed: \n";
        reverse_vec(v2);
        print_vec(v2);
        
        cout << "Bool vector before being reversed: \n";
        print_vec(v3);
        cout << "Bool vector after being reversed: \n";
        reverse_vec(v3);
        print_vec(v3);
    }
    
    {
        cout << "\n\nQUESTION 2\n";
        vector<int> v1 = {};
        vector<int> v2 = {10,20,5};
        cout << "Vectors to concatenate have elements \n";
        print_vec(v1);
        cout << "and \n";
        print_vec(v2);
        bool b = true;
        cout << "With the boolean set as " << b << " then the vector returned has the elements \n";
        print_vec(concatenate_int_vec(v1,v2,b));
        b = false;
        cout << "With the boolean set as " << b << " then the vector returned has the elements \n";
        print_vec(concatenate_int_vec(v1,v2,b));
    }
    
    {
        cout << "\n\nQUESTION 3\n";
        cout << "Demonstration for part A:\n";
        vector<bool> v = {1,0,1};
        cout << "Boolean array prior to zero-buffering is \n";
        print_vec(v);
        size_t K = 4;
        cout << "\nAfter zero-buffering with " << K << " zeros the boolean array has the elements\n";
        zero_buff(v,K);
        print_vec(v);
        cout << "\n\nDemonstration for part B:\n";
        vector<bool> v1 = {1,0,1,0,1};
        vector<bool> v2 = {1,1,1};
        vector<bool> v3  = binary_add(v1,v2);
        
        print_vec(v1);
        cout << " + ";
        print_vec(v2);
        cout << " = ";
        print_vec(v3);
        cout << "\n";
    }
    return 0;
}

