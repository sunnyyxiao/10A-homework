//
//  test_demo.cpp
//  Project
//
//  Created by Sunny Xiao on 11/15/23.
//

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string> // Allows certain string operations
#include <cmath> // Includes a load of useful math related functions like round, max etc.
#include <vector> // Allows us to use vectors
#include "structs.hpp"
int main(){
    {
        // Example usage of Example struct
        cout << "\nEXAMPLE:\n";
        Example A(2);
        A.f();
    }
    {
        // Q1: example usage of Dog struct
        cout << "\nQUESTION 1:\n";
        Dog dog("Lassie", 15.0);
        if (dog.has_ball){
            cout << dog.name << " has the ball!\n";
        } else{cout << dog.name << " does not have the ball.\n";
        }
        dog.fetch();
        if (dog.has_ball){
            cout << dog.name << " has the ball!\n";
        } else{cout << dog.name << " does not have the ball.\n";
        }
    }
    {
        // Q2: example usage of Account struct
        cout << "\nQUESTION 2:\n";
        // Create two accounts using different constructor methods
        Account A("John Smith", 11112222, 10000);
        Account B("James Smith",12121212);

        cout << "Account A information:\n";
        A.view_info();
        A.view_balance();
        //Account B
        cout << "\nAccount B information:\n";
        B.view_info();
        B.view_balance();
        // Test withdraw function
        cout << "\nTry to withdraw -$2 from account A...\n";
        A.withdraw(-200);
        cout << "\nTry to withdraw $400 from account A...\n";
        A.withdraw(40000);
        cout << "\nTry to withdraw $200 from account A...\n";
        A.withdraw(20000);
        // Test deposit function
        cout << "\nTry to deposit -$2 to account B...\n";
        B.deposit(-200);
        cout << "\nTry to deposit $150 to account B...\n";
        B.deposit(15000);
        // Test transfer function
        cout << "\nTry to transfer -$2 from B to A...\n";
        B.transfer_to(A, -200);
        cout << "\nTry to transfer $345.50 from B to A...\n";
        B.transfer_to(A, 34550);
        cout << "\nTry to transfer $120 from B to A...\n";
        B.transfer_to(A, 12000);
        // Final check of balances
        cout << "\nAccount A: \n";
        A.view_balance();
        cout << "Account B: \n";
        B.view_balance();
    }
    return 0;
}


