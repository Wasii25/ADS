#include <iostream>
#include <string>
using namespace std;

class Student{
    int rollNumber;
    string name;
    string subjectName;
    int marks;

    public:
        void inputDetails(){
            cout<<"Enter the Roll number: ";
            cin>>rollNumber;
            cin.ignore();
            cout<<"Enter the name: ";
            getline(cin, name);

            cout<<"Enter the subject name: ";
            getline(cin, subjectName);

            cout<<"Enter the marks: ";
            cin>>marks;
        }

        void displayDetails(){
            cout<<"Roll Number: "<<rollNumber<<endl;
            cout<<"Name: "<<name<<endl;
            cout<<"Subject Number: "<<subjectName<<endl;
            cout<<"Marks: "<<marks<<endl;
        }

        int getRollNumber(){
            return rollNumber;
        }
};


int main(){
    Student students[3];

    for(int i=0; i<3; i++){
        cout<<"Enter the details of student "<<i<<endl;
        students[i].inputDetails();
    }
    cout<<"\n--------------------------------------------------\n";

    for(int i=0; i<3; i++){
        cout<<"Details of Student "<<i<<endl;
        students[i].displayDetails();
    }
    cout<<"\n--------------------------------------------------\n";
    
    int roll;
    cout<<"Enter the roll number to search: ";
    cin>>roll;

    bool found = false;
    for(int i=0; i<3; i++){
        if(students[i].getRollNumber() == roll){
            found = true;
            cout<<"Details of the student with roll number "<<roll<<endl;
            students[i].displayDetails();
        }
    }

    if(!found){
        cout<<"Student not found\n";
    }

    return 0;
}
