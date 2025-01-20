#include <iostream>
using namespace std;
struct LinkList
{
	int data;
	LinkList *next;
} *head;
void createList(int data)
{
	head = new LinkList;
	head->data = data;
	head->next = NULL;
}
void addElementAtEnd(int data)
{
	if (head == NULL)
	{
		createList(data);
		return;
	}
	LinkList *ptr;
	for (ptr = head; ptr->next != NULL; ptr = ptr->next)  // It checks whether the next pointer of the current node (pointed to by ptr) is not equal to NULL. If it's not NULL, it means there is another node after the current one, so the loop continues. If it is NULL, it means ptr is pointing to the last node, and the loop will terminate.
	{
	} // move ptr all the way to the end
	LinkList *NewNode = new LinkList;
	NewNode->data = data;
	NewNode->next = NULL;
	ptr->next = NewNode;
}
void printList()
{
	cout << endl
		 << "The list contains: ";
	for (LinkList *ptr = head; ptr != NULL; ptr = ptr->next)
		cout << ptr->data << "\t";
	cout << endl;
}
int main()
{
	addElementAtEnd(300);
	addElementAtEnd(380);
	addElementAtEnd(890);
	addElementAtEnd(8980);
	printList();

	return 0;
}

struct LinkList
{
	int data;        // Define an integer field to store data.
	LinkList *next;  // Define a pointer to the next node in the linked list.
} *head;             // Define a pointer 'head' to the first node in the linked list.

void createList(int data)
{
	head = new LinkList;  // Create a new instance of the 'LinkList' struct and assign its address to the 'head' pointer.
	head->data = data;    // Set the 'data' field of the first node to the given 'data'.
	head->next = NULL;    // Initialize the 'next' pointer of the first node to NULL since it's currently the only node.
}

void addElementAtEnd(int data)
{
	if (head == NULL)  // Check if the linked list is empty (i.e., 'head' is NULL).
	{
		createList(data);  // If it's empty, call the 'createList' function to create the first node.
		return;            // Exit the function as the first node has been created.
	}

	LinkList *ptr;
	for (ptr = head; ptr->next != NULL; ptr = ptr->next)
	{
	} // Iterate through the linked list to find the last node.

	LinkList *NewNode = new LinkList;  // Create a new instance of the 'LinkList' struct for the new node.
	NewNode->data = data;              // Set the 'data' field of the new node to the given 'data'.
	NewNode->next = NULL;              // Initialize the 'next' pointer of the new node to NULL.

	ptr->next = NewNode;  // Set the 'next' pointer of the last node in the linked list to point to the new node, effectively adding it to the end of the list.
}
