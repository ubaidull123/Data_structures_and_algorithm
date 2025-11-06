#include <iostream>
using namespace std;

// ---------- Insertion Sort for Daily Updates ----------
void insertNewRecords(int arr[], int &n, int newIDs[], int m) {
    for (int k = 0; k < m; k++) {
        int value = newIDs[k];
        int i = n - 1;
        while (i >= 0 && arr[i] > value) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = value;
        n++;
    }
}

// ---------- Merge Function for Weekly Department Integration ----------
void mergeLists(int a[], int n1, int b[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while (i < n1) merged[k++] = a[i++];
    while (j < n2) merged[k++] = b[j++];
}

// ---------- Quick Sort for Doctor Ratings ----------
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

void quickSortDesc(int arr[], int low, int high) {
    if (low < high) {
        int pi = partitionDesc(arr, low, high);
        quickSortDesc(arr, low, pi - 1);
        quickSortDesc(arr, pi + 1, high);
    }
}

// ---------- MAIN FUNCTION ----------
int main() {
    // --- 1. Daily Updates ---
    int existing[10] = {1001, 1002, 1005, 1007, 1009};
    int n = 5;
    int newIDs[2] = {1003, 1004};
    int m = 2;

    insertNewRecords(existing, n, newIDs, m);

    cout << "--- Daily Updates (Patient IDs) ---\n";
    for (int i = 0; i < n; i++) cout << existing[i] << " ";
    cout << endl;

    // --- 2. Weekly Department Integration ---
    int cardio[4] = {1001, 1005, 1008, 1010};
    int radiology[3] = {1002, 1006, 1009};
    int merged[10];

    mergeLists(cardio, 4, radiology, 3, merged);

    cout << "\n--- Weekly Department Integration (Merged IDs) ---\n";
    for (int i = 0; i < 7; i++) cout << merged[i] << " ";
    cout << endl;

    // --- 3. Doctor Ratings Dashboard ---
    int ratings[] = {88, 95, 70, 100, 65, 92};
    int rSize = sizeof(ratings) / sizeof(ratings[0]);

    quickSortDesc(ratings, 0, rSize - 1);

    cout << "\n--- Doctor Ratings (Descending Order) ---\n";
    for (int i = 0; i < rSize; i++) cout << ratings[i] << " ";
    cout << endl;

    cout << "\nAll CityCare Sorting Tasks Done.\n";
    return 0;
}
