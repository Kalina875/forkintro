#include <iostream>
#include <math.h>

using namespace std;


int main()
{   //task 14
    int credit_card_number = 0;
    cout << "Enter credit card number: ";
    cin >> credit_card_number;
    cout << "Your credit card number ends at: XXXXXXXXXXXX" << credit_card_number % 10000 << endl;
}