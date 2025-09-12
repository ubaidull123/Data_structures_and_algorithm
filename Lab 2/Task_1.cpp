// 1. Write a C++ program to create a 1D array and create a function to find the largest and smallest element in the array.
#include <iostream>
using namespace std;


int arr1[] = {7, 29, 30, 12, 15, 19, 32, 56, 70};
int n = sizeof(arr1) / sizeof(arr1[0]);


void find_Largest_And_Smallest() {
    int largest = arr1[0];
    int smallest = arr1[0];

    for (int i = 1; i < n; i++) {
        if (arr1[i] > largest) {
            largest = arr1[i];
        }
        if (arr1[i] < smallest) {
            smallest = arr1[i];
        }
    }

    cout << "largest element: " << largest;
    cout << "\nsmallest element: " << smallest;
}

int main() {
    
    cout << "original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }

    
    find_Largest_And_Smallest();

    return 0;
}