#include<iostream>
using namespace std;
int main(){
    int a,sum=0;
    cout<<"Enter a three digit number: ";
    cin>>a;
    int digit = a%10;
    int quotient = a/10;
    sum+=digit;
    digit = quotient%10;
     sum =sum+digit;
    quotient=quotient/10;
    digit =quotient%10;
    sum=sum+digit;
    cout<<"The sum of 3 digits = "<<sum;
    return 0;
}