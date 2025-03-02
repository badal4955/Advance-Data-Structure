// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node*next;

//     node(int new_data){
//         this->data=new_data;
//         this->next=nullptr;
//     }
// };

// class stack{
//     node*head;
//     public:
//     stack(){
//         this->head=nullptr;
//     }
//     bool isempty(){
//         return head=nullptr;
//     }
// };

// void push(int new_data){
//     node*new_node=new node(new_data);
//     if(!new_node){
//         cout<<"\nStack overflow";
//     }
//     new_node->next=head;
//     head=new_node;
// }
// void pop(){
//     if(this->isempty()){
//         cout<<"\nstack underflow"<<endl;
//     }
//     else{
//         node*temp=head;
//         head=head->next;

//         delete temp;
//     }
// }
// int peek(){
//     if(!isEmpty())
//     {
//         node*p;
//         p=head;

//     }
// }
// int main(){
//     stack st;
//     int ch,x;
//     do{
//         cout<<"\npress 1 to add";
//         cout<<"\npress 2 to delete";
//         cout<<"\npress 3 to show";
//         cout<<"\nEnter your choice:";
//         cin>>ch;
//         if(ch==1)
//         {
//             int n;
//             cout<<"\n Enter Date for Node";
//             cin>>n;
//             st.push(n);
//         }
//         else if(ch==2);
//     }
// }





#include <iostream>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int new_data) {
        this->data = new_data;
        this->next = nullptr;
    }
};

class stack {
    node* head;

public:
    stack() {
        this->head = nullptr;
    }

    bool isempty() {
        return head == nullptr; // Corrected comparison
    }

    void push(int new_data) {
        node* new_node = new node(new_data);
        if (!new_node) {
            cout << "\nStack overflow";
            return; // Added return to avoid further execution
        }
        new_node->next = head;
        head = new_node;
    }

    void pop() {
        if (this->isempty()) {
            cout << "\nStack underflow" << endl;
        } else {
            node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    int peek() {
        if (!isempty()) {
            return head->data; // Return the data of the top node
        } else {
            cout << "\nStack is empty" << endl;
            return -1; // Return a sentinel value or throw an exception
        }
    }
};

int main() {
    stack st;
    int ch, n;

    do {
        cout << "\nPress 1 to add";
        cout << "\nPress 2 to delete";
        cout << "\nPress 3 to show top element";
        cout << "\nPress 4 to exit";
        cout << "\nEnter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "\nEnter data for node: ";
                cin >> n;
                st.push(n);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                cout << "Top element is: " << st.peek() << endl; // Show top element
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (ch != 4);

    return 0;
}