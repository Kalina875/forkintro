#include <iostream>
#include <math.h>

using namespace std;


int main()
{   //task 5
    int number1 = 0, number2 = 0, number3 = 0;
    cout << "Enter three numbers: ";
    cin >> number1 >> number2 >> number3;
    cout << number1 << " < " << number2 << " < " << number3 << " " << boolalpha << (number1 < number2 & number2 < number3) << endl;
}