#include <iostream>
using namespace std;

void dollarToINR(float amount){
    cout<<amount<<"$ = "<<amount*85.5<<"rupees"<<endl;
}

void yenToINR(float amount){
    cout<<amount<<"yen = "<<amount*0.81<<"rupees"<<endl;
}

void euroToINR(float amount){
    cout<<amount<<"euro = "<<amount*95<<"rupees"<<endl;
}

int main(){
    int choice;
    float value;

    do{
        cout<<"Menu\n1 - Dollar to INR\n2 - Yen to INR\n3 - Euro to INR\n";
        cout<<"Enter the choice: ";
        cin>>choice;
        cout<<"Enter the value: ";
        cin>>value;
        switch (choice)
        {
        case 1:
            dollarToINR(value);
            break;
        case 2:
            yenToINR(value);
            break;
        case 3:
            euroToINR(value);
            break;
        case 4: cout<<"Exiting the program. .  .";break;
        default:
            break;
        }
    }while(choice != 4);
    return 0;
}