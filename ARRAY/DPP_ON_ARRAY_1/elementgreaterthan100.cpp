#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
     for(int i=1;i<=n;i++){
        if(arr[i]>100){
            cout<<arr[i]<<" ";
        }
    }
    return 0;

}