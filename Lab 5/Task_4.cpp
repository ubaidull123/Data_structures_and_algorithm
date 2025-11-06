#include <iostream>
using namespace std;

// Selection Sort
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
    }
}

// Binary Search
int binarySearch(int arr[], int n, int target) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Bubble Sort (check if already sorted)
bool bubbleSortCheck(int arr[], int n) {
    bool swapped = false;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
    }
    return swapped;
}

int main() {
    int scores[] = {78, 56, 89, 45, 92, 67};
    int n = sizeof(scores) / sizeof(scores[0]);

    cout << "Original Scores: ";
    for (int i = 0; i < n; i++) cout << scores[i] << " ";
    cout << endl;

    selectionSort(scores, n);
    cout << "Merit List (Sorted): ";
    for (int i = 0; i < n; i++) cout << scores[i] << " ";
    cout << endl;

    int target = 67;
    int pos = binarySearch(scores, n, target);
    if (pos != -1) cout << target << " found at position " << pos << endl;
    else cout << target << " not found" << endl;

    bool swapped = bubbleSortCheck(scores, n);
    if (!swapped) cout << "The list was already sorted (no swaps)." << endl;
    else cout << "Swaps were needed to sort the list." << endl;

    return 0;
}
