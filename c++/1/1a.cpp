#include <iostream>
using namespace std;

inline int largest(int a, int b, int c){
    if(a > b && a > c){
        return a;
    }
    else if(b > a && b > c){
        return b;
    }
    else{
        return c;
    }
}

int main(){
    int a, b, c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    
    int l = largest(a, b, c);
    cout<<"The largest number is: "<<l<<endl;
    return 0;
}