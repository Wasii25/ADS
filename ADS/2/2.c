#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, i;

typedef struct {
    char name[20];
    int account_number;
    float balance;
}customer;


customer Customers[10];

void printCustomers(){
    for(i=0; i<n; i++){
        if(Customers[i].balance < 1000){
            printf("%s\n", Customers[i].name);
        }
    }
}

void updateCustomer(){
    for(i=0; i<n; i++){
        if(Customers[i].balance > 1000){
            Customers[i].balance += 100;
            printf("%s\n", Customers[i].name);
            printf("%.2f\n", Customers[i].balance);
            
        }
    }
}

int main(){
    printf("Enter the number of customers: ");
    scanf("%d", &n);

    for(i=0; i<n; i++){
        printf("Enter the details of customer %d:\n", i+1);

        printf("Enter the name: ");
        scanf("%s", Customers[i].name);

        printf("Enter the account number: ");
        scanf("%d", &Customers[i].account_number);

        printf("Enter the balance: ");
        scanf("%f", &Customers[i].balance);
    }

    printCustomers();
    updateCustomer();
    return 0;
}
