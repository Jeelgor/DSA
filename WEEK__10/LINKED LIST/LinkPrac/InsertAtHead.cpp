#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        cout << "Default Constructer Called" << endl;
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
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int main()
{
    // creeate node
    Node *First = new Node(20);
    Node *Second = new Node(30);
    Node *Third = new Node(40);
    Node *Fourth = new Node(50);

    //  connect node to each others

    First->next = Second;
    Second->next = Third;
    Third->next = Fourth;

    // assign head tail
    Node *head = First;
    Node *tail = Fourth;

    PrintLL(head);
    return 0;
}