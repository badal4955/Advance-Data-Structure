#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
};

Node *head = NULL;
void createNode(int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    cout << "Node with value " << value << " added to the list.\n";
}

void addAtAnyIndex(int index, int value)
{
    Node *newNode = new Node;
    newNode->data = value;
    newNode->prev = NULL;
    newNode->next = NULL;

    if (index == 0) 
    {
        newNode->next = head;
        if (head != NULL)
        {
            head->prev = newNode;
        }
        head = newNode;
        return;
    }

    Node *temp = head;
    int i = 0;

    while (temp != NULL && i < index - 1)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) 
    {
        cout << "Invalid index!\n";
        delete newNode;
        return;
    }

    newNode->next = temp->next;
    newNode->prev = temp;

    if (temp->next != NULL) // 
    {
        temp->next->prev = newNode;
    }

    temp->next = newNode;
}


void deleteAtAnyIndex(int index)
{
    if (head == NULL)
    {
        cout << "List is empty, nothing to delete.\n";
        return;
    }

    Node *temp = head;

    if (index == 0)
    {
        head = temp->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        delete temp;
        cout << "Node at index " << index << " deleted.\n";
        return;
    }

    int i = 0;
    while (temp != NULL && i < index)
    {
        temp = temp->next;
        i++;
    }

    if (temp == NULL) // Index out of bounds
    {
        cout << "Invalid index!\n";
        return;
    }

    if (temp->next != NULL) // If not last node
    {
        temp->next->prev = temp->prev;
    }

    temp->prev->next = temp->next;
    delete temp;
    cout << "Node at index " << index << " deleted.\n";
}

// Function to remove duplicate nodes
void removeDuplicateNode()
{
    Node *current, *index, *temp;

    if (head == NULL)
    {
        return;
    }
    
    for (current = head; current != NULL; current = current->next)
    {
        index = current->next;
        while (index != NULL)
        {
            if (current->data == index->data)
            {
                temp = index;
                index = index->next;

                if (temp->prev != NULL)
                {
                    temp->prev->next = temp->next;
                }
                if (temp->next != NULL)
                {
                    temp->next->prev = temp->prev;
                }
                delete temp;
            }
            else
            {
                index = index->next;
            }
        }
    }
}


void displayList()
{
    if (head == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    Node *temp = head;
    cout << "Doubly Linked List: ";
    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL\n";
}


int main()
{
    int choice, value, index;

    do
    {
        cout << "\nMenu:\n";
        cout << "1. Append Node (Add at End)\n";
        cout << "2. Insert at Any Index\n";
        cout << "3. Delete at Any Index\n";
        cout << "4. Remove Duplicates\n";
        cout << "5. Display List\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            createNode(value);
            break;
        case 2:
            cout << "Enter index: ";
            cin >> index;
            cout << "Enter value: ";
            cin >> value;
            addAtAnyIndex(index, value);
            break;
        case 3:
            cout << "Enter index to delete: ";
            cin >> index;
            deleteAtAnyIndex(index);
            break;
        case 4:
            removeDuplicateNode();
            break;
        case 5:
            displayList();
            break;
        case 6:
            cout << "Exiting program.\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }
    } while (choice != 6);

    return 0;
}