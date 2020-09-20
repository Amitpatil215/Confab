#include <iostream>
using namespace std;

int main()
{
    //using third variable

    int a, b, temp;
    cin >> a >> b;
    temp = a;
    a = b;
    b = temp;
    cout << a << b;

    //using bitwise ^ operator

    int a, b;
    cin >> a >> b;
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << a << b;

    //using inbuilt function

    int a, b;
    cin >> a >> b;
    swap(a, b);
    cout << a << b;
}