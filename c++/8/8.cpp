#include <iostream>

using namespace std;

class Student{
    protected:
        int roll_number;

    public:
        void getRollNumber(int x){
            roll_number = x;
        }

        void putRollNumber(void){
            cout<<"Roll Number: "<<roll_number<<endl;
        }
};

class test : public Student{
    protected:
        float part1, part2;

    public:
        void getMarks(float x, float y){
            part1 = x;
            part2 = y;
        }

        void putMarks(void){
            cout<<"Marks obtained"<<endl;
            cout<<"Part 1: "<<part1<<endl;
            cout<<"Part 2: "<<part2<<endl;
        }
};

class sports : public Student{
    protected:
        float score;
    public:
        void getScore(float s){
            score = s;
        }

        void putScore(void){
            cout<<"Score is: "<<score<<endl;
        }
};

class result : public test, public sports {
    float total;
    public:
        void display(void);
};


void result::display(void){
    total = part1 + part2 + score;
    test::putRollNumber();
    putMarks();
    putScore();
    cout<<"Total score: "<<total<<endl;
}

int main(){
    int a;
    float m1, m2, s1;
    result student1;
    
    cout<<"Enter the roll number: ";
    cin>>a;

    cout<<"Enter marks 1: ";
    cin>>m1; 

    cout<<"Enter marks 2: ";
    cin>>m2;
    cout<<"Enter score: ";
    cin>>s1;

    student1.test::getRollNumber(a);
    student1.getMarks(m1,m2);
    student1.getScore(s1);
    student1.display();

    return 0;
}