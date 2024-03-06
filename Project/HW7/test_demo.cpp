//
//  test_demo.cpp
//  Project
//
//  Created by Sunny Xiao on 11/27/23.
//

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string> // Allows certain string operations
#include <cmath> // Includes a load of useful math related functions like round, max etc.
#include <vector> // Allows us to use vectors
#include "classes.hpp"

int main(){
    {
        // Q1 test:
        // Check initialization
        MyString s1;
        MyString s2(4, 'a');
        std::cout << "s1 contains ";
        s1.print();
        std::cout << "\ns2 contains ";
        s2.print();
        std::cout << "\n";
        // Check length
        std::cout << "The length of s1 is " << s1.length() << ", the length of s2 is " << s2.length() << "\n";
        // Check resizing
        s1.resize(6, 'b');
        s2.resize(3);
        std::cout << "After resizing...\n";
        std::cout << "s1 contains ";
        s1.print();
        std::cout << "\ns2 contains ";
        s2.print();
        std::cout << "\n";
        // Check clear()
        s2.clear();
        std::cout << "After clear s2 contains ";
        s2.print();
        std::cout << "\n";
        // Check push_back
        s2.push_back('h');
        s2.push_back('e');
        s2.push_back('l');
        s2.push_back('l');
        s2.push_back('o');
        s2.push_back('!');
        std::cout << "After push_back h e l l o ! then s2 contains ";
        s2.print();
        std::cout << "\n";
        s2.pop_back();
        std::cout << "After one pop_back s2 contains ";
        s2.print();
        std::cout << "\n";
        std::cout << "The position of the first l in s2 is " << s2.find('l') << "\
        n";
        std::cout << "The position of the first l in s1 is " << s1.find('l') << "\
        n";
        MyString s3 = s2.substr(1,4);
        std::cout << "The substring consisting of the 1st to 4th characters(indexed from 0) of s2 is ";
        s3.print();
        std::cout<<"\n";
        }
        {
        /*
        Airport network we will map out!
        SFO ---- JFK
        | |
        | |
        LAX ---- MIA
        */
        // Q2 Test:
        Node A("JFK");
        Node B("MIA");
        Node C("LAX");
        Node D("SFO");
        B.add_connection(C);
        C.add_connection(D);
        D.add_connection(A);
        A.print_connections();
        B.print_connections();
        C.print_connections();
        D.print_connections();
        std::cout << std::boolalpha << A.name << " has degree " << A.degree() << "\n";
        std::cout << "Is " << A.name << " connected to " << C.name << "? " <<
        A.is_connected_to(C) << "\n";
        std::cout << "Attempting to remove connection between " << A.name << " and " << B.name << "...\n";
        A.remove_connection(B);
        A.print_connections();
        B.print_connections();
        C.print_connections();
        D.print_connections();
        }
        }

