//
//  functions.cpp
//  Project
//
//  Created by Sunny Xiao on 11/15/23.
//

#include <iomanip>
#include <cassert>
#include <string>
#include <cmath>
#include <vector>
#include <iostream>
#include "structs.hpp"
using namespace std;
//----------------------------------------------------------------------------------------------
// EXAMPLE STRUCT
// Note that here we just define the member function!
Example::Example(double _x):x(_x){}
void Example::f() const {
cout << "This member function dosn't do anything. The value of x is " << x <<
".\n";
}

//----------------------------------------------------------------------------------------------
// Q1. DOG STRUCT
// Define the dog struct member functions here...
Dog::Dog(string _name, double _weight_kg):name(_name),weight_kg(_weight_kg),has_ball(false){}
void Dog::bark()const {
    if (weight_kg < 10){
        cout << "yap yap!" << endl;
    } else if (weight_kg < 25){
        cout << "Woof woof!" << endl;
    } else cout << "WOOF WOOF!" << endl;
}

void Dog::fetch(){
    cout << name << ", go fetch!" << endl;
    bark();
    has_ball = true;
}

//----------------------------------------------------------------------------------------------
// Q2. BANK ACCOUNT STRUCT
// Define the bank account class member functions here...
Account::Account(string _account_holder, unsigned int _account_number, int _balance_cents):
account_holder(_account_holder),account_number(_account_number),balance_cents(_balance_cents){assert(balance_cents>=0);}
Account::Account(string _account_holder, unsigned int _account_number):account_holder(_account_holder),account_number(_account_number),balance_cents(0){}
void Account::view_info() const {
    cout << "Account Number: " << account_number << "\nAccount Holder: " << account_holder << endl;
}

void Account::view_balance() const{
    if (balance_cents<0){
        cout << "Warning, you are in your overdraft and may be charged interest!" << endl;
    }
    cout << fixed << setprecision(2) << "Your balance is $" << balance_cents/100.0 << "." << endl;
}

void Account::deposit(int amount){
    if (amount <0){
        cout << "Deposit denied, it is not possible to deposit a non-positive amount of dollars and cents! " << endl;
    } else {
        balance_cents += amount;
        cout << "Deposit successful! \n";
        view_balance();
    }
}

void Account::withdraw(int amount){
    if (amount<0){
        cout << "Withdrawal denied, it is not possible to withdraw a non-positive amount of dollars and cents! " << endl;
    } else if(amount > balance_cents+overdraft_limit){
        cout << "Withdrawal denied, you do not have sufficient funds in your account. \nThe maximum you can withdraw is $" << (balance_cents+overdraft_limit)/100.0 << "." << endl;
    } else {
        balance_cents-=amount;
        cout << "Withdrawal successful! \n";
        view_balance();
    }
}

void Account::transfer_to(Account& other, int amount){
    if (amount<0){
        cout << "Transfer denied, it is not possible to deposit a non-positive amount of dollars and cents! " << endl;
    } else if (amount+transfer_fee>overdraft_limit+balance_cents){
        cout << "Transfer denied, you do not have sufficient funds in your account. \nThe maximum you can transfer is $" << (overdraft_limit+balance_cents-transfer_fee)/100.0 << "." << endl;
    } else {
        //balance_cents is private?
        other.balance_cents+=amount;
        balance_cents-=amount+transfer_fee;
        cout << "Transfer successful! Account number " << other.account_number << " has received $" << amount/100.0 << ". You were charged a $" << transfer_fee/100.0 << " fee.\n";
        view_balance();
    }
}
