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

int main()
{
    char text[100];
    cout<<"Enter your text here"<<endl;
    cin>>text;
    cout<<"Your text "<<text<<" is "<<str_len(text)<<" character Long";
}