#include <iostream>
#include <math.h>

using namespace std;


int main()
{   //task 13
    number1 = 0, number2 = 0;
    cout << "Enter 2 numbers: ";
    cin >> number1 >> number2;
    cout << number1 << " < " << number2 << " " << number1 << " > " << number2 << " " << boolalpha << (number1 < number2 || number1 > number2) << endl;
}