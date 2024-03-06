//
//  classes.cpp
//  Project
//
//  Created by Sunny Xiao on 11/27/23.
//

#include <cassert>
#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <string> // Allows certain string operations
#include <cmath> // Includes a load of useful math related functions like round, max etc.
#include <vector> // Allows us to use vectors
#include <unordered_set> // Allows us to use unordered sets
#include "classes.hpp"


// ----------------------------------------------------------------------------------------------
// Q1. MyString class
// Write your member function definitions for your MyString class here!
//...

MyString::MyString():s{} {}
    
MyString::MyString(const size_t& n, const char c):s(n,c) {}

void MyString::print() const {
    for (size_t i = 0; i < s.size(); ++i){
        std::cout << s[i];
    }
}

size_t MyString::length() {
    return s.size();
}

void MyString::resize(size_t n){
    s.resize(n,'\0');
}

void MyString::resize(size_t n, char c){
    s.resize(n,c);
}

void MyString::clear() {
    s = {};
}

void MyString::push_back(char c){
    s.push_back(c);
}

void MyString::pop_back(){
    s.pop_back();
}

size_t MyString::find(char c){
    size_t index = -1;    
    for (size_t i = 0; i < s.size(); ++i){
        if (c == s[i]){
            return i;
        } else continue;
    }
    return index;
}

MyString MyString::substr(size_t start, size_t length){
    assert (start+length <= s.size());
    MyString s_substr;
    for (size_t i = start; i < start+length; ++i){
        s_substr.push_back(s[i]);
    }
    return s_substr;
}


// ----------------------------------------------------------------------------------------------
// Q2. Node class

Node::Node(const std::string& _name): name(_name), connections() {} // The Node constructor has been defined for you! Don't change it!

void Node::add_connection(Node& n){
    connections.insert (&n);
    n.connections.insert (this);
}

void Node::remove_connection(Node& n){
    connections.erase(&n);
    n.connections.erase(this);
}

void Node::print_connections() const{
    std::cout << "Node " << this->name << " is connected to the following nodes: \n";
    for(const Node* n : connections){
        std::cout << n->name << "\n";
    }
}

size_t Node::degree() const{
    return connections.size();
}

bool Node::is_connected_to(const Node& n){
    return connections.count(&n);
}
