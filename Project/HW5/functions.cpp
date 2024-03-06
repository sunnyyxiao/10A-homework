//
//  functions.cpp
//  Project
//
//  Created by Sunny Xiao on 11/6/23.
//

#include <string>
#include <cmath>
#include <vector>
#include <iostream>
#include "functions.hpp"
using namespace std;

//--------------------------------------------------------------------------------------------
// print_vec functions included from lecture so that you can print out various vectors. DO NOT CHANGE
void print_vec(const vector<int>& v){
    for (size_t i = 0, N = v.size(); i<N; ++i){
        cout << v[i] << " ";
    }
    cout << "\n";
}

void print_vec(const vector<double>& v){
    for (size_t i = 0, N = v.size(); i<N; ++i){
        cout << v[i] << " ";
    }
    cout << "\n";
}

void print_vec(const vector<bool>& v){
    for (size_t i = 0, N = v.size(); i<N; ++i){
        cout << v[i];
    }
}

//--------------------------------------------------------------------------------------------
// QUESTION 1:
void reverse_vec(vector<int>& v){
    size_t vIndex = v.size()-1;
    for (size_t i = 0; i < ((vIndex+1)/2); i++){
        swap(v[i],v[vIndex-i]);
    }
}

void reverse_vec(vector<double>& v){
    size_t vIndex = v.size()-1;
    for (size_t i = 0; i < ((vIndex+1)/2); i++){
        swap(v[i],v[vIndex-i]);
    }
}

void reverse_vec(vector<bool>& v){
    size_t vIndex = v.size()-1;
    for (size_t i = 0; i < ((vIndex+1)/2); i++){
        swap(v[i],v[vIndex-i]);
    }
}

//--------------------------------------------------------------------------------------------
//// QUESTION 2:
vector<int> concatenate_int_vec(const vector<int>& v1, const vector<int>& v2, bool b){
    vector<int> vFinal;
    if (b) {
        vFinal = v1;
        size_t v2Index = v2.size();
        for (size_t i = 0; i < v2Index; i++){
            vFinal.push_back(v2[i]);
        }
    } else {
        vFinal = v2;
        size_t v1Index = v1.size();
        for (int i = 0; i < v1Index; i++){
            vFinal.push_back(v1[i]);
        }
    }
    return vFinal;
}
//--------------------------------------------------------------------------------------------
// QUESTION 3:
// Part A)
void zero_buff(vector<bool>& v, size_t K){
    for (int i = 1; i<=K; i++){
        v.push_back(0);
    }
}
    
// Part B)
vector<bool> binary_add(vector<bool> v1, vector<bool> v2){
    reverse_vec(v1);
    reverse_vec(v2);
    vector<bool> v3;
    size_t difference;
    bool carryOver = 0;
    int sum = 0;
    
    if (v1.size() < v2.size()){
        difference = v2.size()-v1.size();
        zero_buff(v1, difference);
    }
    else if (v2.size() < v1.size()){
        difference = v1.size()-v2.size();
        zero_buff(v2, difference);
    }
    
    for (int i = 0; i <= v1.size()-1; i++){
        sum = v1[i] + v2[i] + carryOver;
        v3.push_back(sum%2);
        carryOver = sum/2;
    }
    
    if(carryOver!=0){
        v3.push_back(carryOver);
    }
    
    reverse_vec(v3);
    
    return v3;
}
