#include <iostream>
using namespace std;
int main(){
    char name[100];
    cout<<"Enter Your name";
    cin>>name;
    name[3]='d';
    name[4]='x';
    cout<<"Hello,"<<name;
    // cout print till /0 null character
}