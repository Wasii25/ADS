#include <iostream>
#include <cmath>
using namespace std;

double power(double m, int n){
    return pow(m, n);
}

int power(int m, int n){
    int result = 1;
    for(int i=0; i<n; i++){
        result *= m;
    }   
    return result;
}

int main(){
    double double_base = 2.5;
    int exponent = 3;
    int int_base = 2;

    cout<<"Power(double, int): \n"<<double_base<<"^"<<exponent<<" = "<<power(double_base, exponent)<<endl;
    cout<<"Power(int, int): \n"<<int_base<<"^"<<exponent<<" = "<<power(int_base, exponent)<<endl;

    return 0;
}
