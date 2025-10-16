#include <iostream>
#include <math.h>

using namespace std;


int main()
{   //task 12
    int total_seconds = 0, days = 0, hours = 0, minutes = 0, seconds = 0;
    cout << "Enter seconds: ";
    cin >> total_seconds;
    days = total_seconds / 86400;
    total_seconds -= days * 86400;
    hours = total_seconds / 3600;
    total_seconds -= hours * 3600;
    minutes = total_seconds / 60;
    total_seconds -= minutes * 60;
    seconds = total_seconds;
    cout << days << " days, " << hours << " hours, " << minutes << " minutes and " << seconds << " seconds." << endl;
}