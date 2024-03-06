//
//  twointegers.cpp
//
//  Created by Sunny Xiao on 10/4/23.
//

 #include <iostream> //Allows us to use cout and cin to read and write via the console
 #include <cmath> //Includes a load of useful math functions
 #include <iomanip> //Need this for setprecision which just means we can write number to two decimal places
 using namespace std; //Tells computer where to look for various functions
 
 int main(){
     cout << boolalpha << "Please enter two integers:\n"; //Leave this line alone
     int x, y; //define two variables
     cin >> x >> y; //two variables set to the numbers inputted
     
     cout<<"The sum of your integers is " << x+y << "\n"; //calculating sum
     
     cout<<"The product of your integers is " << x*y << "\n"; // calculating product
     
     float x1 = x;
     float y1 = y;
     cout<<"The average of your integers is " << (x1 + y1)/2.0 <<"\n"; //displaying average
     
     cout<<"The absolute value of their difference is " << abs(x-y) <<"\n"; //absolute value of difference
     
     cout<<"The larger of your integers is " << fmax(x,y) <<"\n";//calculating larger value
     
     bool squaredanswer; // setting variable for boolean 1
     squaredanswer = fmax(x,y) > pow(fmin(x,y),2);
     cout<< "The larger of the two is greater than the smaller squared: " << squaredanswer << "\n"; //prints t/f answer
     
     bool evenanswer; // setting second boolean variable
     evenanswer = x%2 == 0 || y%2 == 0;
     cout<<"At least one of your integers is even: " << evenanswer << "\n"; //prints t/f answer
     return 0;
 }

