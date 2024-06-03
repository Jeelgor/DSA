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
    ~Node()
    {
        cout << "Destructore Called..." << this->data << endl;
    }
};
void InsertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // Create node
        Node *newNode = new Node(data);
        // Attach newnode to head -
        newNode->next = head;

        // Update head

        head = newNode;
    }
}
Node *FindStartingPoint(Node *head)
{
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cout << "Loop is" << fast->data << endl;
            break;
        }
    }

    // Check if there's no cycle
    if (fast == NULL || fast->next == NULL)
    {
        return NULL;
    }

    // Move slow to head, and advance both pointers by one step until they meet again
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    cout << "Starting point is :: " << slow->data << endl;
    return slow;
}

// ADD 1  in a LINKEDLIST
Node *Reverselist(Node *head)
{
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        Node *nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}
void AddOneNumber(Node *&head)
{
    //   reverse
    head = Reverselist(head);
    // carray 1
    int carray = 1;
    Node *temp = head;
    while (temp->next != NULL)
    {
        int totalSum = temp->data + carray;
        int digit = totalSum % 10;
        carray = totalSum / 10;

        temp->data = digit;
        temp = temp->next;
        if (carray == 0)
        {
            break;
        }
    }

    // procccess Last node;
    if (carray != 0)
    {
        int totalSum = temp->data + carray;
        int digit = totalSum % 10;
        carray = totalSum / 10;
        temp->data = digit;
        if (carray != 0)
        {
            Node *newNode = new Node(carray);
            temp->next = newNode;
        }
    }
    head = Reverselist(head);
}

// CODE OVER

//     Node *slow = head;
//     Node *fast = head;
//     while (fast != NULL)
//     {
//         fast = fast->next;
//         if (fast->next != NULL)
//         {
//             fast = fast->next;
//             slow = slow->next;
//         }
//         if (slow == fast)
//         {
//             break;
//         }
//     }

//     // stating point
//     slow = head;
//     while (slow != fast)
//     {
//         slow = slow->next;
//         fast = fast->next;
//     }
//     cout << "Starting point is :: " << slow;
//     return slow;

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << endl;
}
void InsertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // Create node
        Node *newNode = new Node(data);
        // Attach newnode to head -
        tail->next = newNode;

        // Update head

        tail = newNode;
    }
}
int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    InsertAtHead(head, tail, 8);
    InsertAtHead(head, tail, 7);
    InsertAtHead(head, tail, 6);
    AddOneNumber(head);
    // InsertAtHead(head, tail, 50);
    // InsertAtHead(head, tail, 40);
    // InsertAtHead(head, tail, 30);
    // InsertAtHead(head, tail, 20);
    // InsertAtHead(head, tail, 10);
    // InsertAtTail(head, tail, 400);
    // Creating a cycle
    // tail->next = head->next->next;

    // Print the linked list
    printLL(head);

    // Finding the starting point of the cycle
    // Node *startingPoint = FindStartingPoint(head);
    // if (startingPoint != nullptr)
    //     cout << "Starting point is :: " << startingPoint->data << endl;
    // else
    //     cout << "No cycle found." << endl;

    return 0;
}