#include <iostream>
using namespace std;

// Function to partition the array
int partitionDesc(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) {  
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

// Descending Quick Sort
void quickSortDesc(int arr[], int low, int high) {
    if (low < high) {
        int pi = partitionDesc(arr, low, high);
        quickSortDesc(arr, low, pi - 1);
        quickSortDesc(arr, pi + 1, high);
    }
}

int main() {
    int scores[] = {95, 70, 88, 60, 100, 82, 75};
    int n = sizeof(scores) / sizeof(scores[0]);

    cout << "Original Scores: ";
    for (int i = 0; i < n; i++) cout << scores[i] << " ";
    cout << endl;

    quickSortDesc(scores, 0, n - 1);

    cout << "Ranked Scores (Descending Order): ";
    for (int i = 0; i < n; i++) cout << scores[i] << " ";
    cout << endl;

    return 0;
}
