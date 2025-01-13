#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int data[100];
    int top;
}Stack;

#define MAX 100

void initialize(Stack *stack){
    stack->top = -1;
}

int isEmpty(Stack *stack){
    return stack->top == -1;
}

int isFull(Stack *stack){
    return stack->top == MAX-1;
}

void push(Stack *stack, int element){
    if(isFull(stack)){
        printf("stack is full\n");
        return;
    }
    stack->top++;
    stack->data[stack->top] = element;
}

void pop(Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
    }
    else{
        int element = stack->data[stack->top];
        stack->top--;
        printf("Deleted element is %d\n", element);
    }
}

void display(Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
    }
    else{
        for(int i=0; i<=stack->top; i++){
            printf("%d ", stack->data[i]);
        }
        printf("\n");
    }
}

int main(){
    Stack stack;
    initialize(&stack);
    int n, choice, element;

    do{
        printf("Menu:\n1 - Push\n2 - Pop\n3 - Display\n4 - Exit\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element: ");
            scanf("%d", &element);
            push(&stack, element);
            break;
        case 2:
            pop(&stack);
            break;
        case 3:
            display(&stack);
            break;
        case 4: 
            exit(0);
            break;
        
        default:
            printf("Invalid Choice\n");
            break;
        }
    }while(choice != 4);


    return 0;
}