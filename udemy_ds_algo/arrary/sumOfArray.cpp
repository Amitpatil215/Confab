#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;

    cout << "Enter the size of an array";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    cout << sum;
}