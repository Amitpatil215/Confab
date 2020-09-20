#include <iostream>
using namespace std;

int main()
{
    int n, start, end;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (start = 0, end = n - 1; start < end; start++, end--)
    {
        swap(a[start], a[end]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i]<<" ";
    }
}