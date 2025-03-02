#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*left,*right;

    node(int v){
        data = v;
        left = right = nullptr;
    }
};

void inorder(struct node*node){
    if(node==nullptr)
    return;

    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}
int main(){
    struct node*root = new node(1);
    root->left =new node(2);
    root ->right = new node(3);
    root->left->left = new node(4);
    root->left->right =new node(5);
    root->right->right =new node(6);

    cout<<" Inorder traversal of binary tree is : \n";
    inorder(root);

    return 0;
}




















// #include <stdio.h>
// #include <stdlib.h>

// struct node {
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int value) {
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     if (!newNode) {
//         printf("Memory allocation failed\n");
//         return NULL;
//     }
//     newNode->data = value;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// void inorder(struct node* root) {
//     if (root == NULL) return;
//     inorder(root->left);
//     printf("%d ", root->data);
//     inorder(root->right);
// }

// struct node* insert(struct node* root, int value) {
//     if (root == NULL) return createNode(value);
//     if (value < root->data)
//         root->left = insert(root->left, value);
//     else
//         root->right = insert(root->right, value);
//     return root;
// }

// int main() {
//     struct node* root = NULL;
//     root = insert(root, 5);
//     root = insert(root, 3);
//     root = insert(root, 7);
//     root = insert(root, 2);
//     root = insert(root, 4);
//     root = insert(root, 6);
//     root = insert(root, 8);

//     printf("Inorder Traversal: ");
//     inorder(root);
//     printf("\n");

//     return 0;
// }
