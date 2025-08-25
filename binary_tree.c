#include <stdio.h>
#include <stdlib.h>
// this is a node of the binary tree
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// function for creating a node for the tree
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main()
{

    // create a treee data structure

    struct Node *root = (struct Node *)malloc(sizeof(struct Node));
    root->data = 10;
    root->left = NULL;
    root->right = NULL;

    // placing a data 20 50 left right of the node

    struct Node *newleftNode = (struct Node *)malloc(sizeof(struct Node));
    newleftNode->data = 20;
    newleftNode->left = NULL;
    newleftNode->right = NULL;
    // connection a node into left side of the root node

    root->left = newleftNode;

    struct Node *newRigthNode = (struct Node *)malloc(sizeof(struct Node));
    newRigthNode->data = 520;
    newRigthNode->left = NULL;
    newRigthNode->right = NULL;

    root->right = newRigthNode;

    printf("%d is a root element of the tree\n", root->data);
    printf("%d is a left element of the root\n", root->left->data);
    printf("%d is a right element of the root\n", root->right->data);

    return 0;
}