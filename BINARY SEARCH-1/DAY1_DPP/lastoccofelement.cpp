#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements (sorted): ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] == target){
            ans = mid;        // store index
            low = mid + 1;   // go right
        }
        else if(arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout << "Last occurrence index: " << ans;
    return 0;
}
