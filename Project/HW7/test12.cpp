//
//  test12.cpp
//  Project
//
//  Created by Sunny Xiao on 11/29/23.
//

#include <vector>
#include <iostream>
#include "classes.hpp"

using namespace std;

void print_arr(char* p, size_t length){
    for (size_t i = 0; i < length; ++i){
        cout << p+i << " location has value " << *(p+i) << " ";
    }
    cout << endl;
}

int main(){
    int x = 3;
    int y = 21;
    int* p = &x;
 
//    char arr[5] = {'a','e','r','d','f'};
//    char* p = arr;
//    cout << p << " " << &arr << " " << &(arr[0]) << " " << &p << " " << *p << endl;
//    print_arr(arr,5);
//    
//    int b = 'e';
//    if (b != '3' or b != 'd'){
//        cout << "yay" << endl;
//    }
//    cout << b << endl;
//    
//    int arr2[3] = {1,2,5};
//    int* p2 = arr2;
//    cout << p2 << endl;
//    
//    char arr3[2] = {'a','b'};
//    char* p3 = arr3;
//    cout << p3 << endl;
//    
//    char c = 'a';
//    const size_t x = 4;
//    vector<char> v(x,c);
//    v.pop_back();
//    v.pop_back();
//    v.pop_back();
//    cout << v.size() << " " << v.capacity() << endl;
//    
//    int R[] {1,2,3};
//    
//    for (size_t i = 0; i < 3; i++){
//        cout << i;
//    }
//    
//    
//    {
//        int sum = 0;// position A
//        for(int i = 1; i<3;++i){
//            for (int j = 1; j < 6; ++j){
//                sum++;
//            }
//            cout << sum << "\n";
//        }
//    }
//    
//    const string& t4 = "stri";
//    
//    cout << endl;
//    
//    MyString s2(x, c);
//    const int& y = 5;
    
    return 0;
}
