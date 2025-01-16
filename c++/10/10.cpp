#include <iostream>
using namespace std;

class Shape{
    public:
        virtual void area() = 0;
};

class Rectangle : public Shape {
    private:
        int l;
        int b;
    public:
        Rectangle(int x, int y){
            l = x;
            b = y;
        }

        void area(){
            cout<<"The area of rectangle is: "<<(l*b)<<endl;
        }
};

class Circle : public Shape {
    private:
        int r;
    public:
        Circle(int c){
            r = c;
        }

        void area(){
            cout<<"The area of circle is: "<<(3.14*r*r)<<endl;
        }
};

int main(){
    Shape *s;
    s = new Rectangle(4,5);
    s->area();

    s = new Circle(10);
    s->area();
    return 0;
}