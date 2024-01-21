#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node*next;

    Node(int x) {
        data = x;
        next=NULL;
    }
    Node * insertFirst(Node*head,int value){
          Node * temp =head;
          if(head == NULL) {
            return new Node(value);
          }
          temp->data =value;
          temp->next=value;
          return temp;
    }
    /* data */
};

int main() {
  void insertFirst()
Node * h1 = new Node(10);
Node * h2 = new Node(20);
Node * h3 = new Node(30);
h1=insertFirst(h1,900);
cout<<h1->data<<endl;
cout<<h1->next->data<<endl;
cout<<h1->next->next->data<<endl;
cout<<h1->next->next->next->data<<endl;

insertFirst(head,900);

return 0;

}