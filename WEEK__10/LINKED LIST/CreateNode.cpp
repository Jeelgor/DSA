#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        cout << "Default Constructor called" << endl;
        this->next = NULL;
    }
    Node(int data)
    {
        cout << "Parameterized Constructore Called" << endl;
        this->data = data;
        this->next = NULL;
    }
};

void PrintLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}

// Insert at head
void InsertAtHead(Node *&head, int data)
{
    // Create new node
    Node *newNode = new Node(data);
    // Attach node to new node
    newNode->next = head;
    // head = neew node update head
    head = newNode;
}
void InsertAtTaul(Node *&head, Node *&tail, int data)
{
    // Create new node
    Node *newNode = new Node(data);
    // Attach node to new node
    tail->next = newNode;
    // head = neew node update head
    // head = newNode;
    tail = newNode;
}
int main()
{
    // Node a(20);
    Node *First = new Node(10);
    Node *Second = new Node(20);
    Node *Third = new Node(30);
    Node *Fourth = new Node(40);
    Node *Fifth = new Node(50);
    
    // Link each node to next node
    First->next = Second;
    Second->next = Third;
    Third->next = Fourth;
    Fourth->next = Fifth;

    Node *head = First;
    Node *tail = Fifth;

    // Printing LinkedList
    cout << "Printing Linked List.." << endl;
    PrintLL(head);

    // Insert At Head
    InsertAtHead(head, 500);
    PrintLL(head);

    InsertAtTaul(head, tail, 1000);
    PrintLL(head);
    return 0;
}
