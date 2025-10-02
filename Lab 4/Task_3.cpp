#include <iostream>
using namespace std;


void insertAtPosition(int arr[], int &n, int pos, int value) {
    if (pos < 0 || pos > n) {
        cout << "Invalid position!" << endl;
        return;
    }
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];  
    }
    arr[pos] = value;
    n++;
    
}


void deleteByValue(int arr[], int &n, int value) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            for (int j = i; j < n - 1; j++) {
                arr[j] = arr[j + 1];
            }
            n--;
            return;  
        }
    }
    cout << "Value " << value << " not found!" << endl;
 }

bool searchPass(int arr[], int n, int passID) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == passID) {
            return true;
        }
    }
    return false;
     
}

int main() {
    int passes[20] = {301, 302, 303, 304};  
    int n = 4;

    
    insertAtPosition(passes, n, 0, 300);

     
    insertAtPosition(passes, n, 3, 305);

    
    deleteByValue(passes, n, 303);

     
    if (searchPass(passes, n, 304)) {
        cout << "Boarding pass 304 is present in the system." << endl;
    } else {
        cout << "Boarding pass 304 is NOT present in the system." << endl;
    }

      
    cout << "Final Passenger List: ";
    for (int i = 0; i < n; i++) {
        cout << passes[i] << " ";
    }
    cout << endl;

    return 0;
}