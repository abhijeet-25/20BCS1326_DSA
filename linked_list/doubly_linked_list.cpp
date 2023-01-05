#include <iostream>
using namespace std;
// create node class
class node
{
public:
    int data;
    node *prev;
    node *next;
    node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "remove memory for " << value << endl;
    }
};
// insertion
void insertAtBeg(node *&head, node *&tail, int d)
{
    node *temp = new node(d);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}
void insertAtTail(node *&head, node *&tail, int d)
{
    node *temp = new node(d);
    if (tail == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    if (position == 1)
    {
        insertAtBeg(head, tail, d);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }
    node *newnode = new node(d);
    newnode->next = temp->next;
    temp->next->prev = newnode;
    temp->next = newnode;
    newnode->prev = temp;
}
// deletion
void deletion(node *&head, node *&tail, int position)
{
    if (position == 1)
    {
        node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        node *prev = NULL;
        node *curr = head;
        int count = 1;
        while (count < position)
        {
            prev = curr;
            curr = curr->next;
            count++;
        }
        prev->next = curr->next;
        curr->prev = NULL;
        curr->next = NULL;
        delete curr;
        if (prev->next == NULL)
        {
            tail = prev;
        }
    }
}
// to traverse the linked list
void print(node *&head)
{
    cout << "linked list:";
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
// number of nodes
void getLength(node *&head)
{
    node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    cout << "number of nodes:" << length;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    print(head);
    insertAtBeg(head, tail, 9);
    insertAtBeg(head, tail, 7);
    insertAtBeg(head, tail, 5);
    print(head);

    insertAtTail(head, tail, 12);
    print(head);

    insertAtPosition(tail, head, 2, 11);
    print(head);

    deletion(head, tail, 6);
    print(head);
    cout << "head:" << head->data << endl;
    cout << "tail:" << tail->data << endl;
    getLength(head);

    return 0;
}