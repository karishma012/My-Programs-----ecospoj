#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
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

// insertAtHead
void insertHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    // new node create
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertPosition(Node *&head, Node *&tail, int d, int pos)
{
    if (pos == 1)
    {
        insertHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }
    Node *newnode = new Node(d);
    newnode->next = temp->next;
    temp->next = newnode;
}
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
void deleteNode(Node *head, int pos)
{
    if (pos == 1)
    {
        // head ko aage bdhao or temp k next ko delete karo
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
    }
    Node *prev = NULL;
    Node *curr = head;
    int cnt = 1;
    while (cnt < pos)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
}

int main()
{

    // created a new node
    Node *node1 = new Node(10);
    // cout << node1 -> data << endl;
    Node *head = node1;
    Node *tail = node1;
    insertHead(head, 20);
    insertHead(head, 30);
    insertAtTail(tail, 40);

    //  deleteNode(2,head);
    insertPosition(head, tail, 90, 2);
    deleteNode(head, 2);
    print(head);
}