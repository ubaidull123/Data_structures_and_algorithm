#include<iostream>
using namespace std;

void insert_at_start(int arr[] , int &n , int value){
    for(int i = n ; i>0 ; i--){
        arr[i] = arr[i-1];
    }
    arr[0] = value;
    n++;
}

void insert_at_pos(int arr[] , int &n , int pos , int value){
    if(pos<0 || pos>n){
        cout<<"Invalid position \n";
        return;
    }
    for(int i = n; i >pos ; i--){
        arr[i] = arr[i-1];
    }
    arr[pos]= value;
    n++;

}
void insert_at_end(int arr[] , int &n , int value){
    arr[n] = value;
    n++;
}
int main(){
    int arr[10] = {1,2,3,4,5,6,7,8};
    int n = 8; 
    int pos ;
    int value;
    // cout<<"Enter position < "<<n<<": ";
    // cin>>pos;
    cout<<"enter value you want to add into array: ";
    cin>>value;

    // insert_at_start(arr,n,value);
    // insert_at_pos(arr,n,pos,value);
    insert_at_end(arr,n,value);
    cout<<"Array: \n";
    for(int i = 0 ; i<n ; i++){
        cout<<arr[i]<< " \n ";
    }

    
}