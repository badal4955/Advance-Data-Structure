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

void postorder(struct node*node){
    if(node==nullptr)
    return;

    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}
int main(){
    struct node*root = new node(1);
    root->left =new node(2);
    root ->right = new node(3);
    root->left->left = new node(4);
    root->left->right =new node(5);
    root->right->right =new node(6);

    cout<<" Postorder traversal of binary tree is : \n";
    postorder(root);

    return 0;
}