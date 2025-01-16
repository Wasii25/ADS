#include <iostream>
using namespace std;

float divisionByZero(float num, float den){
    if(den == 0){
        throw runtime_error("Denominator shouldnt be zero\n");
    }
    else{
        return (num/den);
    }
}

int main(){

    float num1, num2, result;
    num1 = 12.5;
    num2 = 0;

    try{
    result = divisionByZero(num1, num2);
    cout<<"The result is "<<result<<endl;
    }catch(runtime_error& e){
        cout<<"ERROR "<<e.what();
    }
    return 0;
}