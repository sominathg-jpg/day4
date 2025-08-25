#include <stdio.h>
#include <stdlib.h>

// tree node
struct TreeNode
{
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

// create new node
struct TreeNode *create_node(int data)
{
    struct TreeNode *newnode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

// inorder traversal
void inorder(struct TreeNode *root)
{
    if (!root)
        return;
    inorder(root->left);
    printf("%d\t", root->data);
    inorder(root->right);
}

// preorder traversal
void preorder(struct TreeNode *root)
{
    if (!root)
        return;
    printf("%d\t", root->data);
    preorder(root->left);
    preorder(root->right);
}

// postorder traversal
void postorder(struct TreeNode *root)
{
    if (!root)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d\t", root->data);
}

// BST insertion
struct TreeNode *insertion(struct TreeNode *root, int data)
{
    if (!root)
        return create_node(data);

    if (data < root->data)
        root->left = insertion(root->left, data);
    else
        root->right = insertion(root->right, data);

    return root;
}

int main()
{
    int A[] = {51, 45, 78, 64, 1, 22, 4, 3, 15, 6, 85};
    struct TreeNode *root = NULL;

    for (int i = 0; i < sizeof(A) / sizeof(A[0]); i++)
    {
        root = insertion(root, A[i]); // ✅ must update root
    }

    printf("Inorder traversal:\n");
    inorder(root);
    printf("\nPreorder traversal:\n");
    preorder(root);
    printf("\nPostorder traversal:\n");
    postorder(root);
    printf("\n");

    return 0;
}
