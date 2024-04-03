#include <iostream>
using namespace std;

class Node{
public:
int data;
Node* next;
Node* prev;

//constructor
Node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
}

//destructor
~Node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};

void print(Node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty " << endl;
        return;
    }
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertHead(Node* &tail ,Node* &head , int data){
    if(head == NULL){
        Node* temp = new Node(data);
        head = temp; 
        tail = temp;
    }
    else{
        Node* temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(Node* &tail,Node* &head, int d) {
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp = new Node(d);
        tail -> next  = temp;
        temp -> prev = tail;
        tail = temp;
    }

}
void insertPosition(Node *&head, Node *&tail, int d, int pos)
{
    if (pos == 1)
    {
        insertHead(tail,head, d);
        return;
    }

    int cnt = 1;
    Node *temp = head;
    while (cnt < pos - 1)
    {
        temp = temp->next;
        cnt++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(tail,head, d);
        return;
    }
    Node *newnode = new Node(d);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}
void deleteNode(Node*&head ,int pos )
{
    if(pos == 1){
        Node* temp  = head;
        head = head->next;
        temp->next->prev = NULL;
        temp->next = NULL;

    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int cnt = 1;
        while(cnt < pos) {
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        curr->prev = NULL;
        prev ->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;
    insertHead(tail,head,20);
     print(head);
    insertPosition(head,tail,30,3);
    print(head);
    deleteNode(head , 1);
    print(head);
}
