#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 20

int stack[MAX];
int top = -1;

int isEmpty(){
    return top == -1;
}

void push(int x){
    stack[++top] = x;
}

int pop(){
    if(!isEmpty()){
        return stack[top--];
    }
    else{
        printf("Stack is empty\n");
    }
}

void convertInfix(char *e){
    int res, len = strlen(e), a, b, result;
    for(int i = 0; i < len; i++){
        if(isdigit(e[i])){
            push(e[i] - '0');
        }
        else{
            b = pop();
            a = pop();
            switch(e[i]){
                 case '+' : result = a + b;
                 case '-' : result = a - b;
                 case '*' : result = a * b;
                 case '/' : result = a / b;
                 case '%' : result = a % b;
                 case '^' : result = a ^ b;
                 default: printf("Invalid postfix exprression.\n");
            }
            push(result);
        }
    }
    res = pop();
    printf("The postfix expression is: %d", res);
}

int main(){
    char exp[20];
    char *e, x;
    printf("Enter the postfix expression: ");
    scanf("%s", exp);
    e = exp;
    convertInfix(e);
    return 0;
}