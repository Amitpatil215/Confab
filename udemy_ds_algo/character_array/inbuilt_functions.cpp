//* include<cstring>

//? I. String Length:
//!strlen(String_name)

//? II. Compare Two string:
// ! strcmp(String_1,String_2)
// returns 0 then String are equal
// returns 1  then str1 ascii value > str2
// returns -1  then str1 ascii value < str2

//? III. Copy String
//! strcpy(destination_string,source_string)
// replace source to destination from index 0 
// it also copy null character ('\0')
//and all the remaining characters in destination remains same

//? IV. Copy first n characters
//! strncpy(destination_string,source_string,how_many_character)
//replace source to destination from index 0 to the specified index
// it will not copy null character
//and all the remaining characters in destination remains same

//? V. Concatinating String
//! strcat(str1,str2)
// string 2 added at the end of string 1

#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    /// I
    // char text[20];
    // cout << "Enter your text" << endl;
    // cin.getline(text, 20);
    // cout << "Length " << strlen(text);

    /// II
    // char text1[20];
    // char text2[20];
    // cout << "Enter your first text" << endl;
    // cin >> text1;
    // cout << "Enter your second text" << endl;
    // cin >> text2;
    // cout << "Comparing " << strcmp(text1, text2);

    /// III
    // char text1[20];
    // char text2[20];
    // cout << "Enter your first text" << endl;
    // cin >> text1;
    // cout << "Enter your second text" << endl;
    // cin >> text2;
    // cout << "Copied into string 1 : " << strcpy(text1, text2);

    /// IV
    // char text1[20];
    // char text2[20];
    // cout << "Enter your first text" << endl;
    // cin >> text1;
    // cout << "Enter your second text" << endl;
    // cin >> text2;
    // cout << "Copied into string 1 first 3 characters : " << strncpy(text1, text2,3);
    
    /// V
    char text1[20];
    char text2[20];
    cout << "Enter your first text" << endl;
    cin >> text1;
    cout << "Enter your second text" << endl;
    cin >> text2;
    cout << "Copied into string 1 first 3 characters : " << strcat(text1, text2);
}