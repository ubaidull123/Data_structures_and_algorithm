#include <iostream>
using namespace std;

void bubbleSortAsc(int arr[], int n, int &swaps) {
    swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
}

void bubbleSortDesc(int arr[], int n, int &swaps) {
    swaps = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swaps++;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int swaps;
    cout << "Original array: ";
    for (int i = 0; i < n; i++) cout <<" "<< arr[i];
    bubbleSortAsc(arr, n, swaps);
    cout << "\nAscending: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nSwaps = " << swaps << endl;

    bubbleSortDesc(arr, n, swaps);
    cout << "Descending: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << "\nSwaps = " << swaps << endl;

    return 0;
}
