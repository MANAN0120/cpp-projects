#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a two digit number: ";
    cin>>x;
    int lastdigit = x%10;
    int quotient = x/10;
    int digit1 = quotient%10;
    int sum = lastdigit*10+digit1;
    cout<<"The reversed number is : "<<sum;
    return 0;
}