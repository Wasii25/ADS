#include <iostream>
using namespace std;

template <typename T>
void bubblesort(T arr[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

template <typename T>
void printArray(T arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int intArr[] = {45,12,7,3,9};
    int n=5;
    cout<<"Int array before sorting: ";
    printArray(intArr, n);
    bubblesort(intArr, n);
    cout<<"Int array after sorting: ";
    printArray(intArr, n);


    double dobArr[] = {45.3,12.9,0.7,3.6540,9.123};
    int m=5;
    cout<<"Doube array before sorting: ";
    printArray(dobArr, m);
    bubblesort(dobArr, m);
    cout<<"Double array after sorting: ";
    printArray(dobArr, m);

    char charArr[5] = {'e','p','c','C','V'};
    cout<<"Char array before sorting: ";
    printArray(charArr, m);
    bubblesort(charArr, m);
    cout<<"Char array after sorting: ";
    printArray(charArr, m);

    return 0;
}