#include<iostream>
using namespace std;
int main(){
    int amount,percentage;
    cout<<"Enter the amount: ";
    cin>>amount;
    cout<<"Enter the percentage: ";
    cin>>percentage;
    int x;
    x = amount*percentage/100;
    int discount = amount-x;
    cout<<"The total amount after discount is: "<<discount;
    return 0;
}