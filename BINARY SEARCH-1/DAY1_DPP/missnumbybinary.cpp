#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int low = 0, high = n-1;

    while(low <= high){

        int mid = low + (high - low)/2;

        if(arr[mid] == mid){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }

    cout << "Missing number: " << low;

    return 0;
}
