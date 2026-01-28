#include<iostream>
using namespace std;
int main(){
    char arr[35];
    cout<<"Enter a sentence to count characters: "<<endl;
    cin.getline(arr,35);
    int count=0;
   for(int i=0;arr[i]!='\0';i++){
    count++;
   }
    cout<<"The length of the character array is: "<<count;
    return 0;
}