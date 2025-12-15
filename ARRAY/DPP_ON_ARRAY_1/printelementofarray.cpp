#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:"<<endl;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
     for(int i=1;i<=n;i++){
        cout<<arr[i]<<" ";
}
return 0;
}
