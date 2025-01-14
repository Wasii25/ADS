#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
    char name[20];
    struct Node* next;
} Node;

Node* createNode() {
    Node* head = (Node*)malloc(sizeof(Node));
    printf("Enter the name: ");
    scanf("%s", head->name);  // Corrected format specifier to %s
    head->next = NULL;
    return head;
}

void insertAtFront(Node** head) {
    Node* newNode = createNode();
    newNode->next = *head;
    *head = newNode;
}

void insertAtEnd(Node** head) {
    Node* newNode = createNode();
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    Node* mover = *head;
    while (mover->next != NULL) {
        mover = mover->next;
    }
    mover->next = newNode;
}

void deleteAtFront(Node** head) {
    if (*head == NULL) {
        return;
    }
    Node* mover = *head;
    *head = (*head)->next;
    free(mover);
}

void deleteAtEnd(Node** head) {
    if (*head == NULL) {
        return;
    }
    Node* mover = *head;
    if (mover->next == NULL) {
        *head = NULL;
        return;
    }
    while (mover->next->next != NULL) {
        mover = mover->next;
    }
    free(mover->next);
    mover->next = NULL;
}

void display(Node* head) {
    int count = 0;
    while (head != NULL) {
        printf("%s ", head->name);
        head = head->next;
        count++;
    }
    printf("\nCount: %d\n", count);
}

int main() {
    Node* head = NULL;
    
    // Test the functions
    insertAtFront(&head);
    insertAtEnd(&head);
    display(head);
    deleteAtFront(&head);
    deleteAtEnd(&head);
    display(head);
    
    return 0;
}
