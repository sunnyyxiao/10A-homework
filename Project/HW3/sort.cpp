//
//  sort.cpp
//  Project
//
//  Created by Sunny Xiao on 10/21/23.
//

#include <iostream> // Allows us to use cout and cin to read and write via the console
#include <utility> // Allows us to use swap which is handy for this problem!
using namespace std; // Tells computer where to look for various functions

int main(){
    
// Demonstration of swap from utility (comment out or delete)
//    int i1 = 2, i2 = 4;
//    swap(i1, i2); // Swaps the values of i1 and i2
//    cout << i1 << ", "  << i2 << "\n";
//    return 0;
    
    cout << "Please enter four integers separated by spaces:\n";
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    
    if (a>b){
        swap(a,b);
    }
    if (b>c){
        swap (b,c);
    }
    if (c>d){
        swap (c,d);
    }
    if (b>c){
        swap (b,c);
    }
    if (a>b){
        swap (a,b);
    }
    if (b>c){
        swap (b,c);
    }
    
    cout << "Your integers in order:\n" << a << " " << b << " " << c << " " << d << "\n";
    
    return 0;
}
