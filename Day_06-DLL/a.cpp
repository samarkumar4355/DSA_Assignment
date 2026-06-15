#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node* prev;
    Node* next;

    Node(int x)
    {
        data = x;
        prev = NULL;
        next = NULL;
    }
};

class DoublyLinkedList
{
private:
    Node* head;

public:
    DoublyLinkedList()
    {
        head = NULL;
    }

    // Insert at Front
    void insertFront(int x)
    {
        Node* node = new Node(x);

        node->next = head;

        if(head)
            head->prev = node;

        head = node;
    }

    // Insert at End
    void insertEnd(int x)
    {
        Node* node = new Node(x);

        if(head == NULL)
        {
            head = node;
            return;
        }

        Node* temp = head;

        while(temp->next)
            temp = temp->next;

        temp->next = node;
        node->prev = temp;
    }

    // Delete First Occurrence of Value
    void deleteNode(int value)
    {
        Node* temp = head;

        while(temp && temp->data != value)
            temp = temp->next;

        if(temp == NULL)
            return;

        if(temp == head)
            head = temp->next;

        if(temp->prev)
            temp->prev->next = temp->next;

        if(temp->next)
            temp->next->prev = temp->prev;

        delete temp;
    }

    // Reverse DLL
    void reverseDLL()
    {
        Node* curr = head;
        Node* temp = NULL;

        while(curr)
        {
            temp = curr->prev;
            curr->prev = curr->next;
            curr->next = temp;

            curr = curr->prev;
        }

        if(temp)
            head = temp->prev;
    }

    // Display DLL
    void display()
    {
        Node* temp = head;

        while(temp)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
};


// Circular Linked List Traversal
class CircularNode
{
public:
    int data;
    CircularNode* next;

    CircularNode(int x)
    {
        data = x;
        next = NULL;
    }
};

void traverseCircular(CircularNode* head)
{
    if(head == NULL)
        return;

    CircularNode* temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);

    cout << endl;
}

int main()
{
    DoublyLinkedList dll;

    dll.insertFront(20);
    dll.insertFront(10);

    dll.insertEnd(30);
    dll.insertEnd(40);

    cout << "DLL: ";
    dll.display();

    dll.deleteNode(30);

    cout << "After Deletion: ";
    dll.display();

    dll.reverseDLL();

    cout << "After Reverse: ";
    dll.display();

   
    CircularNode* n1 = new CircularNode(10);
    CircularNode* n2 = new CircularNode(20);
    CircularNode* n3 = new CircularNode(30);

    n1->next = n2;
    n2->next = n3;
    n3->next = n1;

    cout << "Circular LL Traversal: ";
    traverseCircular(n1);

    return 0;
}