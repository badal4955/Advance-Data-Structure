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

void preorder(struct node*node){
    if(node==nullptr)
    return;

    cout<<node->data<<" ";
    preorder(node->right);
    preorder(node->left);
}
int main(){
    struct node*root = new node(1);
    root->left =new node(2);
    root ->right = new node(3);
    root->left->left = new node(4);
    root->left->right =new node(5);
    root->right->right =new node(6);

    cout<<" Preorder traversal of binary tree is : \n";
    preorder(root);

    return 0;
}