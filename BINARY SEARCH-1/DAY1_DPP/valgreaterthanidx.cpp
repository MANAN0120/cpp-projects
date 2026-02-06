#include<iostream>
using namespace std;
int main(){
    int n;
    int ans=-1;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements of array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else if(arr[mid]>mid){
            ans=mid;
           high= mid-1;
           
        }
        else low=mid+1;
    }
    if(ans!=-1){
        cout<<ans;
    }
    else cout<<"No mismatch";
   
    return 0;
}