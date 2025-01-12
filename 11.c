#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int data;
    struct node *left, *right;
};

typedef struct node *BSTNODE;

BSTNODE createNewNode(int element){
    BSTNODE newNode = (BSTNODE)malloc(sizeof(struct node));
    newNode->data = element;
    newNode->left = newNode->right = NULL;
    return newNode;
}

BSTNODE insertNode(BSTNODE root, int n){
    if(root == NULL){
        printf("Successfully inserted\n");
        return createNewNode(n);
    }
    else if(root->data < n){
        root->right = insertNode(root->right, n);
    }
    else if(root->data > n){
        root->left = insertNode(root->left, n);
    }
    else{
        return root;
    }
}

void inorderTraversal(BSTNODE root){
    if(root != NULL){
        inorderTraversal(root->left);
        printf("%d ",root->data);
        inorderTraversal(root->right);
    }
}

void preorderTraversal(BSTNODE root){
    if(root != NULL){
        printf("%d ",root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(BSTNODE root){
    if(root != NULL){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ",root->data);
    }
}

BSTNODE searchNode(BSTNODE root, int ele){
    if(root == NULL || root->data == ele){
        return root;
    }
    if(ele< root->data){
        return searchNode(root->left, ele);
    }
    return searchNode(root->right, ele);
}

int main(){
    int n, choice;
    BSTNODE root = NULL;
    do{
        printf("Menu: 1 - Insert Node\n2 - Inorder Traversal\n3 - Preorder Traversal\n4 - Postorder Traversal\n5 - Search Node\n6 - Exit\n");
        printf("Enter you choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: 
                    printf("Enter the number: ");
                    scanf("%d", &n);
                    root = insertNode(root, n);
                    break;

            case 2: 
                    if(root == NULL){
                        printf("Tree is empty\n");
                    }
                    else{
                        printf("Inorder Traversal: ");
                        inorderTraversal(root);
                        printf("\n");
                    }
                    break;
                
            case 3: 
                    if(root == NULL){
                        printf("Tree is empty\n");
                    }
                    else{
                        printf("Preorder Traversal: ");
                        preorderTraversal(root);
                        printf("\n");
                    }
                    break;

            case 4: 
                    if(root == NULL){
                        printf("Tree is empty\n");
                    }
                    else{
                        printf("Postorder Traversal: ");
                        postorderTraversal(root);
                        printf("\n");
                    }
                    break;
                
            case 5: 
                    printf("Enter the element to be searched: ");
                    scanf("%d", &n);
                    if(searchNode(root, n) == NULL){
                        printf("Element not found in BST \n");
                    }
                    else{
                        printf("Element found i BST\n");
                    }
                    break;
            case 6: exit(0);break;
        
            default: printf("Invalid choice\n");break;
        }
    }while(choice != 6);
    return 0;
}