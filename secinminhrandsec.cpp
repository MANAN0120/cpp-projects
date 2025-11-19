#include<iostream>
using namespace std;
int main(){
int sec1;
cout<<"Enter time in seconds: ";
cin>>sec1;
int hrs = sec1/3600;
int min = sec1/60;
int sec = sec1%60;
cout<<min<<"minutes"<<endl;
cout<<hrs<<"hours"<<endl;
cout<<sec<<"seconds"<<endl;
return 0;
}