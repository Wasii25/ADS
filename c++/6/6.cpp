#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

void swap(float &a, float &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a, b;
    float x,y;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of x: ";
    cin>>x;
    cout<<"Enter the value of y: ";
    cin>>y;

    cout<<"Before swap a: "<<a<<" b: "<<b<<endl;
    swap(a,b);
    cout<<"After swap a: "<<a<<" b: "<<b<<endl;
    cout<<"Before swap x: "<<x<<" y: "<<y<<endl;
    swap(x,y);
    cout<<"Before swap x: "<<x<<" y: "<<y<<endl;

    return 0;
}