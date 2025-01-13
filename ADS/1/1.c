#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n, choice = 0, number, position, i;
int arr[10];

void insert();
void Delete();
void display();


int main(){
    printf("Enter the size of the array: ");
    scanf("%d", &n);


    printf("Enter the array elements: \n");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

    do{
        printf("Menu:\n1 - Insert\n2 - Delete\n3 - Display\n4 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: insert();break;
            case 2: Delete();break;
            case 3: display();break;
            case 4: exit(0);break; 
            default: printf("Invalid choice\n");break;   
        }

    }while(choice != 4);

    return 0;
}


void insert(){
    printf("Enter the number to be inserted: ");
    scanf("%d", &number);
    printf("Enter the position to be inserted: ");
    scanf("%d", &position);

    i = n;
    n=n+1;
    do{
        arr[i] = arr[i-1];
        i = i -1;
    }while(i>position);
    arr[position] = number;
}

void Delete(){
    printf("Enter the position to be deleted: ");
    scanf("%d", &position);
    for(i=position; i<n; i++){
        arr[i] = arr[i+1];
    }
    n--; 
}

void display(){
    for(i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}
