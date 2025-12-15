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
    int min_element = arr[0];
    for(int i=1;i<=n;i++){
        if(min_element>arr[i]){
            min_element = arr[i];
        }
    }
    cout<<"The minimum element in the array is: "<<min_element;
    return 0;
}