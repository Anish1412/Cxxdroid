#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * createNode(int key){
    struct Node * n;
    n = (struct Node*)malloc(sizeof(struct Node));
    n->data = key;
    n->left = NULL;
    n->right = NULL;
}

struct Node * search(struct Node * root,int key){
    while(root != NULL){
        if(root->data == key){
            return root;
        }
        else if(root->data > key){
            return search(root->left,key);
        }
        else {
            return search(root->right,key);
        }
    }
    return NULL; 
}

int main(){
    struct Node * p = createNode(8);
    struct Node * p1 = createNode(6);
    struct Node * p2 = createNode(9);
    struct Node * p3 = createNode(5);
    struct Node * p4 = createNode(7);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    int num;
    printf("Enter number : ");
    scanf("%d",&num);
    struct Node * n = search(p,num);
    if(n != NULL){
        printf("%d is present in the Binary Search Tree!!",n->data);
    }
    else {
        printf("It is not present in the Binary Search Tree!!");
    }
    return 0;
}