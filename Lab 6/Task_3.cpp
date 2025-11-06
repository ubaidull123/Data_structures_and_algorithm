// Task 03: 
// Given an array of words:

// ["apple", "kiwi", "banana", "pear", "grape"]
// Sort them by:
// 1. Word length (shortest to longest).
// 2. If two words have the same length, sort them alphabetically.

#include <iostream>
using namespace std;

bool compare(const string &a, const string &b) { // this function compares the words length and alphabetically
    if (a.length() == b.length()) {
        return a < b; 
    }
    return a.length() < b.length(); 
}

void insertionSort(string arr[], int n) {
    for (int i = 1; i < n; i++) {
        string key = arr[i];
        int j = i - 1;

        while (j >= 0 && compare(key, arr[j])) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main() {
    string arr[] = {"apple", "kiwi", "banana", "pear", "grape"};
    int n = 5; 

    cout << "Orignal array:" << endl;
    for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

    insertionSort(arr, n);

    cout << "\nSorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";

    }
    return 0;
}