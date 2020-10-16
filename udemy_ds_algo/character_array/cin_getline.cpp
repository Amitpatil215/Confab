///* cin.getline(String_name,length,delimiter);
///! by default delimiter(optional argumrnt)='\n'
/// we can assign our own delimitera also
///*cin takes input till new line character '\n'.
#include <iostream>
using namespace std;
int main()
{
    char name[20];
    cout << "Enter Your name" << endl;
    cin.getline(name, 4);
    //it will take input upto 3 char and place null character '\0' at 4th place
    cout << endl
         << name;
}

int main()
{
    char name[20];
    cout << "Enter Your name" << endl;
    cin.getline(name, 20, ',');
    //it will take input upto 20 char and place '\0' character when it fined ','.
    cout << endl
         << name;
}