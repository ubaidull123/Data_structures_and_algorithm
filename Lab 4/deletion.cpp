#include<iostream>
using namespace std;

void del_at_start(int arr[], int &n){
    for(int i=0 ; i<n-1 ; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

void del_at_end(int arr[] , int &n ){
   if(n==0){
    cout<<"Arry is Empty! ";
    return;
   }
   n--;
}
void del_at_pos(int arr[], int &n, int pos){
 if (pos<0 || pos >n){
        cout<<"Invalid Position!";
        return;
    }
    for(int i = pos ; i<n-1 ; i++){
        arr[i] = arr[i+1];
    }
    n--;
}

int main(){
    int arr[20] ={2,3,11,45,43,65,76,85,55,64,34,24,14,12};
    int n = 14;
    int pos = 4;

    // del_at_start(arr , n);
    // del_at_pos(arr,n,pos);
    del_at_end(arr , n);
    
    cout<<"Array: ";
    for(int i=0 ; i<n ; i++){
        cout<<" "<<arr[i];
    }
}