#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target value: ";
    cin>>target;
    int low=0;
    int high=n-1;
    int ans=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]<=target){
            ans=arr[mid];
            low=mid+1;
        }
        else high=mid-1;
    }
    if(ans != -1)
        cout <<"Floor is: "<< ans;
    else cout << "No floor exists";

    return 0;
}