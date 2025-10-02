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
    cout << "Product " << value << " not found in the cart!" << endl;
    
}


bool searchProduct(int arr[], int n, int productID) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == productID) {
            return true;
        }
    }
    return false;
    
}

int main() {
    int cart[20] = {401, 402, 403, 404}; 
    int n = 4;

    
    insertAtPosition(cart, n, 0, 400);

    
    insertAtPosition(cart, n, n, 405);

    
    deleteByValue(cart, n, 403);

    
    if (searchProduct(cart, n, 402)) {
        cout << "Product 402 is still in the cart." << endl;
    } else {
        cout << "Product 402 is NOT in the cart." << endl;
    }

    
    cout << "Final Cart: ";
    for (int i = 0; i < n; i++) {
        cout << cart[i] << " ";
    }
    cout << endl;

    return 0;
}