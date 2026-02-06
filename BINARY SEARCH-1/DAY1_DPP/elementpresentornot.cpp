#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
        int target;
        cout<<"Enter the target value: ";
        cin>>target;
    
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            cout<<"FOUND ";
            break;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else high=mid-1;
        }
        cout<<"NOT FOUND";
    return 0;
}
