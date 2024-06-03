#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
};
void PrintLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    // LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
    }
    else
    {
        // LL is not empty
        Node *newNode = new Node(data);
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void InsertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
}

void InsertAtMiddle(Node *&head, Node *&tail, int data, int position)
{
    Node *newNode = new Node(data);
    Node *prevNode = NULL;
    Node *currNode = head;
    while (position != 1)
    {
        position--;
        prevNode = currNode;
        currNode = currNode->next;
    }
    prevNode->next = newNode;
    newNode->prev = prevNode;
    currNode->prev = newNode;
    newNode->next = currNode;
}
int GetLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void Deletion(Node *&head, Node *&tail, int position)
{
    int len = GetLength(head);
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        head->prev = NULL;
        delete temp;
    }
    else
    {
        if (position == len)
        {
            Node *prevNode = tail->prev;
            prevNode->next = NULL;
            tail->prev = NULL;
            delete tail;
            tail = prevNode;
        }
        else
        {
            Node *prevNode = NULL;
            Node *CurrNode = head;
            while (position != 1)
            {
                position--;
                prevNode = CurrNode;
                CurrNode = CurrNode->next;
            }
            Node *nextNode = CurrNode->next;
            nextNode->prev = NULL;
            CurrNode->next = NULL;
            CurrNode->prev = NULL;
            prevNode->next = NULL;
            prevNode->next = nextNode;
            delete CurrNode;
        }
    }
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtHead(head, tail, 40);
    insertAtHead(head, tail, 30);
    insertAtHead(head, tail, 20);
    insertAtHead(head, tail, 10);
    PrintLL(head);
    // cout << endl;
    // InsertAtTail(head, tail, 50);
    // PrintLL(head);
    // cout << endl;
    // Insett at middle
    // InsertAtMiddle(head, tail, 25, 3);
    // PrintLL(head);
    cout << endl;
    // Delete
    Deletion(head, tail, 2);
    PrintLL(head);
    return 0;
}