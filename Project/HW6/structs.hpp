//
//  functions.hpp
//  Project
//
//  Created by Sunny Xiao on 11/15/23.
//

#ifndef structs_hpp
#define structs_hpp

using namespace std;
//----------------------------------------------------------------------------------------------
// EXAMPLE STRUCT
// Observe that in the header file we only declare the struct and its member variables and functions,
// we do not define the member functions.
struct Example{
    double x;
    Example(double _x);
    void f() const;
};
//----------------------------------------------------------------------------------------------
// Q1. DOG STRUCT
struct Dog{
    string name;
    double weight_kg;
    bool has_ball;
    Dog(string _name, double _weight_kg);
    void bark() const;
    void fetch();
};
//----------------------------------------------------------------------------------------------
// Q2. BANK ACCOUNT STRUCT
class Account{
    public:
    Account(string _account_holder, unsigned int _account_number, int _balance_cents);
    Account(string _account_holder, unsigned int _account_number);
    void view_info() const;
    void view_balance() const;
    void deposit(int amount);
    void withdraw(int amount);
    void transfer_to(Account& other, int amount);

private:
    const int overdraft_limit = 20000;
    const int transfer_fee = 500;
    const unsigned int account_number;
    string account_holder;
    int balance_cents;
};

#endif /* structs_hpp */
