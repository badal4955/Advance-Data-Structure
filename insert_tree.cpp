#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

struct node {
    int data;
    node* left;
    node* right;

    node(int value) {
        data = value;
        left = right = nullptr;
    }
};

node* insert(node* root, int value) {
    auto start = high_resolution_clock::now();

    if (root == nullptr) {
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<nanoseconds>(stop - start);
        cout << "Time taken to insert " << value << " : " << duration.count() << " nanoseconds" << endl;
        return new node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else {
        root->right = insert(root->right, value);
    }

    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "Time taken to insert " << value << " : " << duration.count() << " nanoseconds" << endl;

    return root;
}

void inorder(node* root) {
    if (root == nullptr) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    node* root = nullptr;
    int n, x, ch;

    do {
        cout << "\nPress 1 to insert node";
        cout << "\nPress 2 to show inorder traversal";
        cout << "\nEnter your choice: ";
        cin >> x;

        if (x == 1) {
            cout << "Enter data for node: ";
            cin >> n;
            root = insert(root, n);
        } else if (x == 2) {
            cout << "\nInorder traversal: ";
            inorder(root);
            cout << endl;
        } else {
            cout << "\nInvalid choice!";
        }

        cout << "\nPress 1 to continue, any other key to exit: ";
        cin >> ch;
    } while (ch == 1);

    return 0;
}





// //in c
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// struct node {
//     int data;
//     struct node* left;
//     struct node* right;
// };

// struct node* createNode(int value) {
//     struct node* newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data = value;
//     newNode->left = newNode->right = NULL;
//     return newNode;
// }

// struct node* insert(struct node* root, int value) {
//     if (root == NULL) {
//         clock_t start = clock();
//         struct node* newNode = createNode(value);
//         clock_t stop = clock();
//         printf("Time taken to insert %d : %ld nanoseconds\n", value, (stop - start));
//         return newNode;
//     }

//     if (value < root->data) {
//         root->left = insert(root->left, value);
//     } else {
//         root->right = insert(root->right, value);
//     }

//     return root;
// }

// void inorder(struct node* root) {
//     if (root == NULL) return;
//     inorder(root->left);
//     printf("%d ", root->data);
//     inorder(root->right);
// }

// int main() {
//     struct node* root = NULL;
//     int choice, value;

//     while (1) {
//         printf("\nMenu:\n");
//         printf("1. Insert node\n");
//         printf("2. Show inorder traversal\n");
//         printf("3. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &choice);

//         switch (choice) {
//             case 1:
//                 printf("Enter value to insert: ");
//                 scanf("%d", &value);
//                 root = insert(root, value);
//                 break;
//             case 2:
//                 printf("\nInorder traversal: ");
//                 inorder(root);
//                 printf("\n");
//                 break;
//             case 3:
//                 printf("Exiting...\n");
//                 return 0;
//             default:
//                 printf("Invalid choice! Try again.\n");
//         }
//     }

//     return 0;
// }
