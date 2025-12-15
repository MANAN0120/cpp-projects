#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int product=1;
     for(int i=1;i<=n;i++){
        product*=arr[i];
}
cout<<"The product of elements of array is:"<<product;
}