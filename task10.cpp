#include <iostream>
#include <math.h>

using namespace std;


int main()
{   //task 10
    a = 0, b = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    a += b;
    b = a - b;
    a -= b;
    cout << "a = " << a << ", " << "b = " << b << endl;
}