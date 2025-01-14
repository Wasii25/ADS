#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
    char name[20];
    struct node* next;
    struct node* prev;
}Node;



Node* createNode(){
    Node* newNode = (Node*)malloc(sizeof(Node));
    printf("Enter the name: ");
    scanf("%s", newNode->name);
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}

void insertAtEnd(Node** head, Node** tail){
    Node* newNode = createNode();
    if(*head == NULL){
        *head = newNode;
        *tail = newNode;
        return;
    }
    else{
        (*tail)->next = newNode;
        newNode->prev = *tail;
        *tail = newNode;
    }
}

void displayDLL(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        printf("%s ", temp->name);
        temp = temp->next;
    }

}

void insertAtFront(Node** head, Node** tail){
    Node* newNode = createNode();
    if(*head == NULL){
        *head = newNode;
        *tail = newNode;
    }
    newNode->next = *head;
    (*head)->prev = newNode;
    *head = newNode;
}

void deleteAtEnd(Node** head, Node** tail){
    if(*tail == NULL){
        return;
    }
    Node* temp = *tail;
    *tail = (*tail)->prev;
    (*tail)->next = NULL;
    free(temp);
}

void deleteAtFront(Node** head, Node** tail){
    if(*head == NULL){
        return;
    }
    else{
        Node* temp = head;
        *head = (*head)->next;
        (*head)->prev = NULL;
        free(temp);
    }
}