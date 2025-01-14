#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Node {
    int coeff, degree;
    struct Node* next;
}Node;

Node* createNode(int coeff, int degree){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->coeff = coeff;
    newNode->degree = degree;
    newNode->next = NULL;
    return newNode;
}

Node* insertNode(Node* tail, int coeff, int degree){
    Node* newNode = createnode(coeff, degree);
    if(tail == NULL){
        tail = newNode;
        newNode->next = tail;
        return;
    }

    Node* head = tail->next;
    if(degree > tail->degree){
        newNode->next = head;
        tail->next = newNode;
    }

    Node* curr = head;
    while(curr->next != head && curr->next->degree > degree){
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    if(curr == tail){
        tail = newNode;
    }
}

void displayPolynomial(Node* tail){
    Node* temp = tail->next;
    if(tail == NULL){
        printf("0\n");
    }
    do{
        printf("%d^%dx", temp->coeff, temp->degree);
        temp = temp->next;
        if(temp != tail->next){
            printf(" + ");
        }
    }while(temp!=tail->next);
    printf("\n");
}

