#include <iostream>
using namespace std;

class Complex{
    float real, img;

    public:
        void getComplex();
        void showComplex();
        friend Complex addComplex(Complex c1, Complex c2);
};

void Complex::getComplex(){
    cout<<"Enter the real part: ";
    cin>>real;

    cout<<"Enter the imaginary part: ";
    cin>>img;
}

void Complex::showComplex(){
    cout<<real<<"+ i"<<img<<endl;
}

Complex addComplex(Complex c1, Complex c2){
    Complex c;
    c.real = c1.real + c2.real;
    c.img = c1.img + c2.img;
    return c;
}

int main(){
    Complex c1, c2, c3;
    cout<<"Enter the first number"<<endl;
    c1.getComplex();
    cout<<"Enter the second number"<<endl;
    c2.getComplex();

    c3 = addComplex(c1, c2);

    c1.showComplex();
    c2.showComplex();
    c3.showComplex();
    return 0;
}