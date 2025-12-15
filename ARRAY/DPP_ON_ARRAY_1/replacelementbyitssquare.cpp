#include<iostream>
using namespace std;
int main(){
    int n,square=1;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<=n;i++){
        square = arr[i]*arr[i];
        cout<<square<<" ";
    }
     return 0;
}