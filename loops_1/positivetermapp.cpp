#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    int a=100;
    int d=-3;
    for(int i=1;i<=n;i++){
        if(a>0){
            cout<<a<<" ";

        }
        a+=d;
    }
    return 0;
}