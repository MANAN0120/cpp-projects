#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter total minutes: ";
    cin >>x;
    int hrs = x/60;
    int minutes = x%60;
    cout<<hrs<<" hours "<<minutes<<" minutes"<<endl;
    return 0;
}