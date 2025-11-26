// 1-2+3-4+5.....n terms
#include<iostream>
using namespace std;
int main(){
    int even,odd,n,sum;
    even=0;
    odd=0;
    cout<<"Enter the limit of series: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%2==0){
            even+=i;
        }
        else odd+=i;
    }
    sum=odd-even;
    cout<<"The sum of series is: "<<sum;
    return 0;
}