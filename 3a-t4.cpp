#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int k, i = 1, sum_k = 0, number;
    while (true) {
        cout << "Enter the amount of integers to sum = "; cin >> k;
        if (k <= 0) { cout << "Invalid value. Please, input a positive integer number.\n"; continue; }
        break;
    }
    do {
        cout << "Enter integer nr. " << i << ": ";
        cin >> number;
        if (!cin) { cout << "Invalid value. Please input a valid integer number.\n"; cin.clear(); cin.ignore(10000,'\n'); continue; }
        sum_k += number; i++;
    } while (i <= k);
    cout << " The total sum of " << k << " integers is: " << sum_k;
    return 0;
}
