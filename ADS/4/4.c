    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>

    #define MAX 100

    char stack[MAX];
    int top = -1;

    int isEmpty(){
        return top == -1;
    }


    void push(char element){
        top++;
        stack[top] = element;
    }

    char pop(){
        if(!isEmpty()){
            char p = stack[top];
            top--;
            return p;
        }

    }

    int priority(char x){
        if(x == '^' || x == '*' || x == '/' ||x == '%' ) return 2;
        else if(x == '+' ||x == '-' ) return 1;
        return 0;
    }

    void convertInfix(char *e){
        int len = strlen(e);
        char res[len+1];
        int j = 0;

        for(int i = 0; i<len; i++){
            if(isalnum(e[i])){
                
                res[j++] = e[i];
            }

            else if(e[i] == '('){
                push(e[i]);
            }
            else if(e[i] == ')'){
                while(!isEmpty() && stack[top] != '('){
                
                    res[j++] = pop();
                }
                if(!isEmpty()){     
                    
                    pop();
                }
                else{
                    printf("Invalid expression: UNvbalanced parenthesis");
                    return;
                }
            }
            else if(e[i] == '^' || e[i] == '*' || e[i] == '/' || e[i] == '%' || e[i] == '+' || e[i] == '-'){
                while(!isEmpty() && priority(e[i]) <= priority(stack[top])){
                
                    res[j++] = pop();
                }
                push(e[i]);
            }
            else {
                printf("Invalid symbols in infix expression. Only alphanumeric and { '+', '-', '*', '%%', '/', '^' } are allowed.\n");
                return;
            }
            
        }
        while(!isEmpty()){
            if(stack[top] == '('){
                printf("Invalid expression: Unbalanced parenthesis");
                return;
            }
                res[j++] = pop();
        }
        res[j++] = '\0';
        printf("The postfix expression is: %s", res);
    }

    int main(){
        char *exp[20];
        printf("Enter the expression: ");
        scanf("%s", exp);
        convertInfix(exp);
        return 0;
    }
