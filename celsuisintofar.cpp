#include<iostream>
using namespace std;
int main(){
    int temp;
    cout<<"Enter temprature in celsius: ";
    cin>>temp;
    int ftemp; // temprature in farehneit
    ftemp = temp*9/5+32;
    cout<<"Temprature in farehneit is: "<<ftemp;
    return 0;
}
