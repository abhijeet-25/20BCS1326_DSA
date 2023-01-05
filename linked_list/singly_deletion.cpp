#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        this->data = d;
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
        cout << "free space for " << value << endl;
    }
};
void insertAtBeg(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void deletion(int position, node *&head, node *&tail)
{
    if (head == NULL){
        cout<<"underflow"<<endl;
    }
    
    // deleting the starting node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;

        // memory free
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
        curr->next = NULL;
        delete curr;

        if (prev->next == NULL)
        {
            tail = prev;
        }
    }
}

void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    insertAtBeg(head, 11);
    insertAtBeg(head, 12);
    insertAtBeg(head, 13);
    insertAtBeg(head, 14);
    cout << "linked list:";
    print(head);
    
    deletion(1, head, tail);
    cout << "deleting the first node:";
    print(head);
    // deletion(5, head);//can not work
    // print(head);
    deletion(4, head, tail);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    return 0;
}