#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    int esum=0;
    int lastdigit;
    while(x>0){
        lastdigit=x%10;
        if(lastdigit%2==0){
            esum+=lastdigit;
        }
        x/=10;
    }
    cout<<esum;

    return 0;
}