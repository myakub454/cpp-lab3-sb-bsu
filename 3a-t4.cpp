#include <iostream>
using namespace std;
int main()
{
    int k=4, balance, sum=0;
    for (int i=1; i<=k; ++i)
    {
    int number;
    cout << "Enter the number:";
    cin >> number;
  balance = number % 5;
 if (balance == 0)
    {
        sum += number;
    }
    else {
        cout << "Error \n";
    } 
    }
    cout << "The sum of numbers:" << sum;
    return 0;
}
