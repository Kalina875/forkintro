#include <iostream>
#include <math.h>

using namespace std;


int main()
{   //task 3
    double money = 0;
    cout << "Enter amount: ";
    cin >> money;
    cout << "Amount in euro: " << money * 0.51 << endl;
    cout << "Amount in usd: " << money * 0.6 << endl;
}