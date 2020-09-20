#include <iostream>
using namespace std;

int main()
{
    int n, max, min;
    cin >> n;
    int a[n];
    cin >> a[0];
    max = a[0];
    min = a[0];
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        if (max < a[i])
        {
            max = a[i];
        }
        else if (
            min > a[i])
        {
            min = a[i];
        }
    }
    cout << "Largest No " << max<<endl;
    cout
        << "Smallest No " << min;
}