#include<iostream>
using namespace std;
int main(){
    char arr[50];
    cout<<"Enter a character array: ";
    cin.getline(arr,50);
    int vowel=0;
    int consonant=0;
    for(int i=0;arr[i]!='\0';i++){
        if(arr[i]=='a'|| arr[i]=='e'|| arr[i]=='i'|| arr[i]=='o'|| arr[i]=='u'|| arr[i]=='A'||arr[i]=='E'|| arr[i]=='O'||arr[i]=='U'){
            vowel++;
        }
        else consonant++;
    }
    cout<<"The number of consonant and vowels in the array are: "<<consonant<<","<<vowel; 
    return 0;
}