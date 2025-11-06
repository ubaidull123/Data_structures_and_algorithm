// Task 02:
// Write C++ program that prompt the users to create an array of 10 integers
//  and implement Insertion Sort to sort that array of integers in both ascending and descending order. 
#include<iostream>
using namespace std;
void insertion_sort_asc(int arr[] , int n){
    for(int i=1 ; i<n ; i++){
        int key = arr[i];
        int j = i-1;

        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;

    }

}

void insertion_sort_desc(int arr[] , int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;

        while(j>= 0 && arr[j] < key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[10];
    int n = 10;
    cout<<"Enter Array elements: \n";
    for(int i = 0 ;i<n ; i++){
        cout<<"Element "<<i+1<<" : ";
        cin>>arr[i];
    }
    cout<<"\nOrignal Array: ";
    for(int i = 0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    insertion_sort_asc(arr,n);
        
    cout<<"\nAscending Sorted Array: ";
    for(int i = 0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }
    insertion_sort_desc(arr , n);
    cout<<"\nDescending Sorted Array: ";
    for(int i = 0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }


}