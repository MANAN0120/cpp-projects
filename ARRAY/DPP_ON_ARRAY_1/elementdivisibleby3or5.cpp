#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array:";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
     for(int i=1;i<=n;i++){
        if(arr[i]%3==0 || arr[i]%5==0){
            cout<<"The element: "<<arr[i]<<" is divisble by 3 or 5"<<endl;
        }
        else cout<<"The element: "<<arr[i]<<" is not divisible by 3 or 5"<<endl;
    }

    return 0;
}