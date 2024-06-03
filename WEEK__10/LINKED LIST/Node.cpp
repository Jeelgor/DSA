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
void printLL(Node *head)
{d)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "-> ";
        temp = temp->next;
    }
    cout << endl;
}
int getLenght(Node *head)
{
    Node *temp = head;
    int count = 0;
    while (temp != NULL)
    {
        count++;
        // cout << temp->data << "-> ";
        temp = temp->next;
    }
    return count;
}

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

void Createtail(Node *head, Node *&tail)
{
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // jab looop khartam hoga
    // then temp vala pointer last me khada hoga
    tail = temp;
}

void InsertAtAnyPosition(Node *&head, Node *&tail, int data, int position)
{
    int length = getLenght(head);
    if (position == 1)
    {
        InsertAtHead(head, tail, data);
    }
    else if (position == length + 1)
    {
        InsertAtTail(head, tail, data);
    }
    else
    {
        Node *newNode = new Node(data);
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }
        prev->next = newNode;
        newNode->next = curr;
    }
}

void DeleteAtAnyPosition(Node *&head, Node *&tail, int position)
{

    if (head == NULL)
    {
        cout << "Can not delete coz its empty" << endl;
        return;
    }
    if (head == tail)
    {
        Node *temp = head;
        delete temp;
        head = NULL;
        tail = NULL;
    }

    int length = getLenght(head);
    // head delete
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else if (position == length)
    {
        // find prev
        Node *prev = head;
        while (prev->next != tail)
        {
            prev = prev->next;
        }
        // prev node ka link break karo
        prev->next = NULL;
        delete tail;
        tail = prev;
    }
    else
    {
        Node *prev = NULL;
        Node *curr = head;
        while (position != 1)
        {
            position--;
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
    // tail delete
    // any positon se delete
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    InsertAtHead(head, tail, 10);
    InsertAtHead(head, tail, 20);
    InsertAtHead(head, tail, 30);
    InsertAtHead(head, tail, 40);
    InsertAtTail(head, tail, 400);

    printLL(head);

    DeleteAtAnyPosition(head, tail, 5);
    printLL(head);
    // InsertAtAnyPosition(head, tail, 200, 3);
    // printLL(head);
    // // Node n1(29);
    // Node *First = new Node(20);
    // Node *Second = new Node(30);
    // Node *Third = new Node(40);
    // Node *Fourth = new Node(50);
    // Node *Fifth = new Node(60);

    // // Creation of LinkedList
    // First->next = Second;
    // Second->next = Third;
    // Third->next = Fourth;
    // Fourth->next = Fifth;

    // Node *tail = Fifth;
    // Node *head = First;

    // cout << "Printing LinkedList" << endl;
    // printLL(head);
    // cout << "Printing length: " << getLenght(head) << endl;

    // InsertAtHead(head, 500);
    // printLL(head);

    // InsertAtTail(head, tail, 600);
    // printLL(head);
    return 0;
}