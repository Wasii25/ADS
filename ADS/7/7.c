#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 5

typedef struct {
    int data[MAX];
    int front, rear, size;
}CircularQueue;

int isFull(CircularQueue *q){
    return q->size == MAX;
}

int isEmpty(CircularQueue *q){
    return q->size == 0;
}

void initializeQueue(CircularQueue *q){
    q->front = 0;
    q->rear = -1;
    q->size = 0;
}

void insert(CircularQueue *q, int element){
    if(isFull(q)){
        printf("Queue overflow");
    }
    else{

        q->rear = (q->rear + 1) % MAX;
        q->data[q->rear] = element;
        q->size++;
    }
}

void DeleteElement(CircularQueue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }
    else{
        int element;
        element = q->data[q->front];
        q->front = (q->front + 1) % MAX;
        q->size--;
        printf("Deleted element is: %d \n", element);
    }
}

void display(CircularQueue *q){
    if(isEmpty(q)){
        printf("Queue is empty\n");
    }
    else{
        for(int i =0; i<=q->size; i++){
            printf("%d ", q->data[(q->front + i) % MAX]);
        }
        printf("\n");
    }
}

int main(){
    CircularQueue q;
    initializeQueue(&q);
    int n, i, choice = 0;
    int element;

    while(choice != 4){
    printf("Menu\n1 - Insert\n2 - Delete\n3 - Display\n4 - Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter the element to be inserted: ");
        scanf("%d", &element);
        insert(&q, element);
        printf("Inserted element is: %d\n", element);
        break;
    case 2:
        DeleteElement(&q);
        break;
    case 3:
        display(&q);
        break;
    case 4:
        exit(0); break;
    default: printf("Invalid choice\n");
        break;
    }
    }
    return 0;
}