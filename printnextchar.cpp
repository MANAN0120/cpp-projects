#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character:";
    cin>>ch;
    cout<<"The next character will be: "<<char(++ch);
    return 0;
}