#include<iostream>
using namespace std;
int main(){
    int n,fac=1;
    cout<<"Enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
        fac*=i;
    }
    cout<<fac;
    return 0;
}