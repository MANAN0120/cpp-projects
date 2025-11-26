#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the value: ";
    cin>>x;
    int a,b,c;
    a=0;
    b=1;
    for(int i=1;i<=x;i++){
      cout<<a<<" ";
      c=a+b;
      a=b;
      b=c;
    }
    return 0;
}