#include<iostream>
using namespace std;

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a new node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    return newNode;
}

// Function to insert a new node at the end of the linked list
struct Node* insertAtEnd(struct Node* head, int data) {
    struct Node* newNode = new  Node(); 
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        return newNode;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}


// Function to insert a new node at a specific position in the linked list
struct Node* insertAtPosition(struct Node* head, int data, int position) {
    struct Node* newNode = new  Node();;
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = head;
        return newNode;
    }

    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; ++i) {
        temp = temp->next;
    }

    if (temp == NULL) {
        cout<<"Invalid position\n";
        free(newNode);
        return head;
    }

    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

// Function to delete the first node from the linked list
struct Node* deleteAtBeginning(struct Node* head) {
    if (head == NULL) {
        cout<<"Linked list is empty. Cannot delete.\n";
        return head;
    }
    struct Node* temp = head;
    head = head->next;
    free(temp);
    return head;
}

// Function to delete the last node from the linked list
struct Node* deleteAtEnd(struct Node* head) {
    if (head == NULL) {
        cout<<"Linked list is empty. Cannot delete.\n";
        return head;
    }
    if (head->next == NULL) {
        free(head);
        return NULL;
    }
    struct Node* temp = head;
    while (temp->next->next != NULL) {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
    return head;
}

// Function to delete a node from a specific position in the linked list
struct Node* deleteAtPosition(struct Node* head, int position) {
    if (head == NULL) {
        cout<<"Linked list is empty. Cannot delete.\n";
        return head;
    }
    if (position == 1) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }
    struct Node* temp = head;
    for (int i = 1; i < position - 1 && temp != NULL; ++i) {
        temp = temp->next;
    }
    if (temp == NULL || temp->next == NULL) {
        cout<<"Invalid position. Cannot delete.\n";
        return head;
    }
    struct Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    free(nodeToDelete);
    return head;
}

// Function to display the linked list
void display(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        cout<<" -> "<<temp->data;
        temp = temp->next;
    }
    cout<<"NULL\n";
}

// Main function for testing the deletion operations
int main() {
    struct Node* head = NULL;
    head = insertAtBeginning(head, 1);
    head = insertAtBeginning(head, 2);
    head = insertAtEnd(head, 3);
    head = insertAtEnd(head, 4);
    head = insertAtPosition(head, 2, 7);
    head = insertAtPosition(head, 1, 9);

    cout<<"Linked List: ";
    display(head);

    head = deleteAtBeginning(head);
    printf("Linked List after deleting first element: ");
    display(head);

    head = deleteAtEnd(head);
    printf("Linked List after deleting last element: ");
    display(head);

    head = deleteAtPosition(head, 2);
    printf("Linked List after deleting element at position 2: ");
    display(head);

return 0;
}
