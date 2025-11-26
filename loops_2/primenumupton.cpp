#include<iostream>
using namespace std;
int main(){
    int pnum=2;
    for(int i=1;i<=100;i++){
        if(pnum%i!=0){
            cout<<pnum;
            pnum++;
        }
    }
    return 0;
}