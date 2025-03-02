#include <iostream>
using namespace std;
struct node{int data; node*next;};
node*rear=nullptr;
node*front=nullptr;



void insert(int data)
{
    node * newnode=new node();
    newnode->data=data;
    newnode->next=nullptr;
    if(rear==nullptr){
        front=rear=newnode;
    }else{
        rear->next=newnode;
        rear=newnode;
    }
}

void deleteit()
{
    if(front==nullptr){
        cout<<"queue is empty"<<endl;
    }else{
        node* temp=front;
        front=front->next;
        cout<<"the deleted data is ="<<temp->data<<endl;
        delete temp;

    }
    if(front==nullptr){
        rear=nullptr;
    }
}

void display()
{
   if(front==nullptr){
    cout<<"queue is empty";
   }
   else{
    node* temp= front;
    while(temp !=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   }
}

int main()
{
    int choice, data;
    while (true)
    {
        cout << "\nQueue Menu:\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter data to insert: ";
            cin >> data;
            insert(data);
            break;
        case 2:
            deleteit();
            break;
        case 3:
            display();
            break;
        case 4:
            cout << "Exiting program.\n";
            return 0;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    }
}