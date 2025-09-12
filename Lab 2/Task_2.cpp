// 2. Write a C++ program to ask users to create a 1D array of 10 elements and create a function to count even and odd numbers present in the array and display the count values along with the elements.
#include <iostream>
using namespace std;

void even(int arr[], int size);
void odd(int arr[], int size);

int main() {
    const int size = 10;
    int arr1[size];

    cout << "Enter 10 elements for the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }

    cout << "\nOriginal array: ";
    for (int i = 0; i < size; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    even(arr1, size);
    odd(arr1, size);

    return 0;
}

void even(int arr[], int size) {
    int even_count = 0;
    cout << "\nEven elements: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            even_count++;
        }
    }
    cout << "\nCount of even elements: " << even_count << endl;
}

void odd(int arr[], int size) {
    int odd_count = 0;
    cout << "\nOdd elements: ";
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            odd_count++;
        }
    }
    cout << "\nCount of odd elements: " << odd_count << endl;
}
