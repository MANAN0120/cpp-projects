#include<iostream>
using namespace std;
int main(){
    int a,d,n;
    cout<<"Enter the first term: ";
    cin>>a;
    cout<<"Enter the common difference: ";
    cin>>d;
    cout<<"Enter the number of terms you want to print: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a+i*d<<" ";
    }
    return 0;
}