#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

// to insert a new node at the beginning
struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

//  to insert a new node at the end
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL)
    {
        return newNode;
    }

    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// to insert a new node at a specific position
struct Node *insertAtPosition(struct Node *head, int data, int position)
{
    struct Node *newNode = new Node();
    ;
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1)
    {
        newNode->next = head;
        return newNode;
    }

    struct Node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; ++i)
    {
        current = current->next;
    }

    if (current == NULL)
    {
        cout << "Invalid position\n";
        free(newNode);
        return head;
    }

    newNode->next = current->next;
    current->next = newNode;
    return head;
}

// to delete the first node
struct Node *deleteAtBeginning(struct Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty. Cannot delete.\n";
        return head;
    }
    struct Node *temp = head;
    head = head->next;
    free(temp);
    return head;
}

//  to delete the last node from the linked list
struct Node *deleteAtEnd(struct Node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty. Cannot delete.\n";
        return head;
    }
    if (head->next == NULL)
    {
        free(head);
        return NULL;
    }
    struct Node *current = head;
    while (current->next->next != NULL)
    {
        current = current->next;
    }
    free(current->next);
    current->next = NULL;
    return head;
}

// to delete a node from a specific position in the linked list.
struct Node *deleteAtPosition(struct Node *head, int position)
{
    if (head == NULL)
    {
        cout << "Linked list is empty\n";
        return head;
    }
    if (position == 1)
    {
        struct Node *temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node *current = head;
    for (int i = 1; i < position - 1 && current != NULL; ++i)
    {
        current = current->next;
    }
    if (current == NULL || current->next == NULL)
    {
        cout << "Invalid position. Cannot delete.\n";
        return head;
    }
    struct Node *nodeToDelete = current->next;
    current->next = current->next->next;
    free(nodeToDelete);
    return head;
}

// Function to display the linked list
void display(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        cout << " -> " << current->data;
        current = current->next;
    }
    cout << "NULL\n";
}

// Main function for testing the deletion operations
int main()
{
    struct Node *head = NULL;
    head = insertAtBeginning(head, 1);
    head = insertAtBeginning(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtPosition(head, 2, 7);
    head = insertAtPosition(head, 1, 9);

    cout << "Linked List: ";
    display(head);

    head = deleteAtBeginning(head);
    cout << "Delete ELEMENT At Beginning: ";
    display(head);

    head = deleteAtEnd(head);
    cout << "Delete ELEMENT At END:: ";
    display(head);

    head = deleteAtPosition(head, 2);
    cout << "Delete ELEMENT At POSITION 2: ";
    display(head);

    return 0;
}
