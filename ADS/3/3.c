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

int pop(Stack *stack){
    if(isEmpty(stack)){
        printf("Stack is empty\n");
        return -1;
    }
    else{
        int element = stack->data[stack->top];
        stack->top--;
        return element;
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

void checkPalindrome(char *word){
    int n = strlen(word), i;
    Stack stack;
    initialize(&stack);
    int pal = 1;

    for(i=0; i<n; i++){
        push(&stack, word[i]);
    }

    for(i=0; i<n; i++){
        if(pop(&stack) != word[i]){
            pal = 0;
            break;
        }
        else{
            pal = 1;
        }
    }
    if(pal){
        printf("%s is a palindrome", word);
    }else{
        printf("Not a palindrome\n");
    }
}

int main(){
    Stack stack;
    initialize(&stack);
    int n, choice, element;
    char word[20];

    do{
        printf("Menu:\n1 - Push\n2 - Pop\n3 - Display\n4 - Check Palindrome\n5 - Exit\n");
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
            printf("Deleted element is %d\n",pop(&stack));
            break;
        case 3:
            display(&stack);
            break;
        case 4:
            printf("Enter the word to check Palindrome: ");
            scanf("%s", word);
            checkPalindrome(word);
        case 5: 
            exit(0);
            break;
        
        default:
            printf("Invalid Choice\n");
            break;
        }
    }while(choice != 5);


    return 0;
}