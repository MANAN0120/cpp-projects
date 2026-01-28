#include <iostream>
using namespace std;

int main() {
    char arr[100];
    int length = 0;
    cout << "Enter a string: ";
    cin.getline(arr, 100);
    while (arr[length] != '\0') {
        length++;
    }
    cout << "Reversed string: ";
    for (int i = length - 1; i >= 0; i--) {
        cout << arr[i];
    }
    return 0;
}