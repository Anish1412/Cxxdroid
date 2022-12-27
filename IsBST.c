#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * left;
    struct Node * right;
};


void inOrder(struct Node * root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

int isBST(struct Node * root){
    static struct Node * prev = NULL;
    if(root != NULL){
        if(!isBST(root->left)){
            return 0;
        }
          if(prev != NULL && root->data <= prev->data){
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else {
        return 1;
    }
}

int main(){
    struct Node * p;
    p = (struct Node*)malloc(sizeof(struct Node));
    p->data = 8;
    p->left = NULL;
    p->right = NULL;

    struct Node * p1;
    p1 = (struct Node*)malloc(sizeof(struct Node));
    p1->data = 6;
    p1->left = NULL;
    p1->right = NULL;

    struct Node * p2;
    p2 = (struct Node*)malloc(sizeof(struct Node));
    p2->data = 9;
    p2->left = NULL;
    p2->right = NULL;

    struct Node * p3;
    p3 = (struct Node*)malloc(sizeof(struct Node));
    p3->data = 5;
    p3->left = NULL;
    p3->right = NULL;

    struct Node * p4;
    p4 = (struct Node*)malloc(sizeof(struct Node));
    p4->data = 7;
    p4->left = NULL;
    p4->right = NULL;

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    printf("\nSorted Array : %d",isBST(p));
    return 0;
}