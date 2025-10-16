#include <iostream>
#include <math.h>

using namespace std;


int main()
{   //task 8
    double radius = 0;
    const double PI = 3.14159265;
    cout << "Enter circle radius: ";
    cin >> radius;
    cout << "Circle length is: " << 2 * radius * PI << endl;
    cout << "Circle area is: " << radius * radius * PI << endl;
}