#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    int lastdigit,revnum,rem;
    while(num>0){
        rem=num%10;
        revnum=revnum*10;
        num/=10;
    }
    int sum = num+revnum;
    cout<<"Sum = "<<sum << "["<<num <<"+" <<revnum << "]";
    return 0;
}