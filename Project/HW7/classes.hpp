//
//  classes.hpp
//  Project
//
//  Created by Sunny Xiao on 11/27/23.
//

#ifndef classes_hpp
#define classes_hpp

#include <unordered_set>// Allows us to use unordered sets

// ----------------------------------------------------------------------------------------------
// Q1. MyString Class
// Write your MyString class declaration here!

class MyString{
public:
    MyString();
    MyString(const size_t& n, const char c);
    void print() const;
    size_t length();
    void resize(size_t n);
    void resize(size_t n, char c);
    void clear();
    void push_back(char c);
    void pop_back();
    size_t find(char c);
    MyString substr(size_t start, size_t end);
    
private:
    std::vector<char> s;
};



// ----------------------------------------------------------------------------------------------
// Q2. Network and node classes

class Node{
public:
    std::string name; // This is the name of a node, e.g., Bob or Alice for people, LAX or JFK for airports
    
    Node(const std::string& _name);
    void add_connection(Node& n);
    void remove_connection(Node& n);
    void print_connections() const;
    size_t degree() const;
    bool is_connected_to(const Node& n);
    
private:
    std::unordered_set<const Node*> connections; // This is an unordered set of all nodes which are connected to this one!
};

#endif /* classes_hpp */

