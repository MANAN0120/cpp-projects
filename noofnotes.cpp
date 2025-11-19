#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter the amount: ";
    cin>>amount;
    int notes;
    notes = amount/100;
    int rem = amount%100;
    cout<<"Total 100 rupess notes will be:"<<notes<<"and remaining amount will be: "<<rem;
    return 0;
}