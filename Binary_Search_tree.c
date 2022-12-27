#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * left;
    struct Node * right;
};

struct Node * createNode(int data){
    struct Node * n;
    n = (struct Node*)malloc(sizeof(struct Node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

struct Node * search(struct Node * root,int key){
    if(root == NULL){
        return NULL;
    }
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

    struct Node * n = search(p,2);
    if(n != NULL){
        printf("Found : %d",n->data);
    }
    else {
        printf("Not Found!!");
    }
    return 0;
}