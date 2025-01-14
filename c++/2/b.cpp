#include <iostream>
using namespace std;

int main(){
    
    int n;

    cout<<"Enter the number of students: ";
    cin>>n;

    float *ptr;

    ptr = new float[n];

    cout<<"Enter the GPA of students"<<endl;

    for(int i=0; i<n; i++){
        cout<<"Student "<<(i + 1)<<": ";
        cin>>*(ptr+i);
    }

    cout<<"Displaying the student details"<<endl;

    for(int i=0; i<n; i++){
        cout<<"Student "<<(i + 1)<<": "<<*(ptr+i)<<endl;
    }    

    return 0;
}