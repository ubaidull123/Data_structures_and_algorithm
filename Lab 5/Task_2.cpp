#include <iostream>
using namespace std;

int binarySearchIterative(int arr[], int n, int target) {
    int low = 0, high = n - 1, count = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == target) {
            count++;
            // check left side
            int left = mid - 1;
            while (left >= 0 && arr[left] == target) {
                count++;
                left--;
            }
            // check right side
            int right = mid + 1;
            while (right < n && arr[right] == target) {
                count++;
                right++;
            }
            return count;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return 0;
}

int binarySearchRecursive(int arr[], int low, int high, int target) {
    if (low > high) return 0;
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
        int count = 1;
        count += binarySearchRecursive(arr, low, mid - 1, target);
        count += binarySearchRecursive(arr, mid + 1, high, target);
        return count;
    }
    else if (arr[mid] < target)
        return binarySearchRecursive(arr, mid + 1, high, target);
    else
        return binarySearchRecursive(arr, low, mid - 1, target);
}

int main() {
    int arr[] = {10, 20, 20, 30, 40, 50, 50, 50, 60, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 50;
    cout<<"Array: ";
    for(int i=0;i<n;i++){

        cout<<"\n"<<arr[i]<<" ";
    }

    cout << "Iterative count of " << target << " = "
         << binarySearchIterative(arr, n, target) << endl;

    cout << "Recursive count of " << target << " = "
         << binarySearchRecursive(arr, 0, n - 1, target) << endl;

    return 0;
}
