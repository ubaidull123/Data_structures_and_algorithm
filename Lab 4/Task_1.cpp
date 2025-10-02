#include <iostream>
using namespace std;

void insertAtStart(int arr[], int &n, int newBook) {
    for (int i = n; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newBook;
    n++;
}


void insertAtEnd(int arr[], int &n, int newBook) {
    arr[n] = newBook;
    n++;
}

void deleteAtPosition(int arr[], int &n, int pos) {
    if (pos < 0 || pos >= n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1]; 
    }
    n--;
}


bool searchBook(int arr[], int n, int bookID) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == bookID) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[20] = {101, 102, 103, 104}; 
    int n = 4;

  
    insertAtStart(arr, n, 100);

    insertAtEnd(arr, n, 105);

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 103) {
            pos = i;
            break;
        }
    }
    if (pos != -1) {
        deleteAtPosition(arr, n, pos);
    }

    
    if (searchBook(arr, n, 104)) {
        cout << "Book 104 is available in the library." << endl;
    } else {
        cout << "Book 104 is NOT available in the library." << endl;
    }

    
    cout << "Final Book Collection: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
