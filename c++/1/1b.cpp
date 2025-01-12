#include <iostream>
using namespace std;

void exchange(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void bubblesort(int arr[], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n - i - 1; j++){
            if(arr[j]>arr[j+1]){
                exchange(arr[j], arr[j+1]);
            }
        }
    }
}

int main(){
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    
    int arr[n];
    
    cout<<"Enter the array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubblesort(arr, n);

    cout<<"Sorted array: "<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}