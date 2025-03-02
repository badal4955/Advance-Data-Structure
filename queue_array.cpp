#include <iostream>
#define N 10
using namespace std;

int rear = -1;
int front = -1;
int queue[N];

void insert(int data)
{
    if (rear == N - 1)
    {
        cout << "The queue is full, can't insert " << data << endl;
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = data;
    cout << "Inserted: " << data << endl;
}

void deleteit()
{
    if (front == -1 || front > rear)
    {
        cout << "The queue is empty\n";
        return;
    }
    cout << "The deleted element is = " << queue[front] << endl;
    front++;
    if (front > rear)
    {
        front = rear = -1;
    }
}

void display()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << " ";
    }
    cout << endl;
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