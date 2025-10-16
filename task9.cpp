#include <iostream>
#include <math.h>

using namespace std;


int main()
{   //task 9
    double a = 0, b = 0, c = 0, D = 0, x1 = 0, x2 = 0;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter c: ";
    cin >> c;
    D = b * b - 4 * a * c;
    x1 = (-b + sqrt(D)) / (2 * a);
    x1 = (-b - sqrt(D)) / (2 * a);
    cout << "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
}