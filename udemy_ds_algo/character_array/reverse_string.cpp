#include <iostream>
using namespace std;

int str_len(char input[])
{
    int count = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
///
void reverse(char textToReverse[])
{
    int start = 0;
    int end = str_len(textToReverse) - 1;
    while (start < end)
    {
        swap(textToReverse[start], textToReverse[end]);
        start++;
        end--;
    }
}

int main()
{
    char text[20];
    cout << "Input your Text to reverse" << endl;
    cin.getline(text,20);
    reverse(text);
    cout << text;
}