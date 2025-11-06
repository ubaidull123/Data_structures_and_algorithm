// Task 01:
// Write a C++ program using Insertion Sort to arrange the marks in ascending order.
// Then, display:
// •	The sorted list
// •	The highest and lowest marks.
#include <iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    for(int i = 1 ; i<n ; i++){
        int Key = arr[i];
        int j = i-1;
        
        while(j>= 0 && arr[j] > Key){
            arr[j+1] = arr[j];
            j--;

    }
    arr[j+1] = Key;
    }
}

int main(){
    int arr[20] = {11,33,55,44,22,66,77,88,67,99};
    int n = 10;
    
    cout<<"Orignal Array: ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    insertion_sort(arr,n);
    cout<<"\nSorted Array: ";
       for(int i=0 ; i<n ; i++){
           cout<<arr[i]<<" ";
       }
    cout<<"\nHighest Marks = "<<arr[n-1];
    cout<<"\nLowest Marks = "<<arr[0];
    

}