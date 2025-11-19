#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter any character: ";
    cin>>ch;
    cout<<"The next two character after entered character is: "<<char(ch+1)<<","<< char(ch+2);
    return 0;
}