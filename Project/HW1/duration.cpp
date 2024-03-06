//
//  duration.cpp
//
//  Created by Sunny Xiao on 10/4/23.
//


#include <iostream> //Allows us to use cout and cin to read and write via the console
using namespace std; //Tells computer where to look for various functions

int main(){
    cout << "Please enter the experiment start time in military time format: \n";
    int startTime;
    cin >> startTime;
    int startminutes = (startTime/100)*60;
    startminutes = startminutes + startTime%100;
    
    cout << "Please enter the experiment end time in military time format: \n";
    int endtime;
    cin >> endtime;
    
    int endminutes = (endtime/100)*60;
    endminutes = endminutes + endtime%100;
    bool timeAdjust = startminutes > endminutes;
    bool noAdjust = endminutes > startminutes;
    const int MIN_IN_DAY = 24*60;
    int totalminutes;
    totalminutes = endminutes-(startminutes*noAdjust)+(timeAdjust*(MIN_IN_DAY-startminutes));
    int totalhours = totalminutes/60;
    totalminutes = totalminutes%60;
    cout << "Experiment duration: " << totalhours << " hours " << totalminutes << " minutes" << ".\n";
    return 0;
}

