#include <iostream>
using namespace std;

class Animal{
    public:
        virtual void makeSound() const {
            cout<<"Animal makes sound"<<endl;
        }
};


class Dog : public Animal {
    public:
        void makeSound(){
            cout<<"Dog says woof"<<endl;
        }
};

class Cat : public Animal {
    public:
        void makeSound(){
            cout<<"Cat says meow"<<endl;
        }
};

int main(){
    Dog dog;
    Cat cat;
    dog.makeSound();
    cat.makeSound();
    return 0;
}