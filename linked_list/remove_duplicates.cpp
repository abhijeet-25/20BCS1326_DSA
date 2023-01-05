#include <iostream>
#include <map>
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
    // ~node()
    // {
    //     int value = this->data;
    //     if (this->next != NULL)
    //     {
    //         delete next;
    //         this->next = NULL;
    //     }
    //     cout << "free memory for node:" << value << endl;
    // }
};
void insertAtBeg(node *&head, int d)
{
    node *temp = new node(d);
    temp->next = head;
    head = temp;
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

// remove dupliactes in a sorted linked list
// tc-o(n) and space o(1)
void remove_dupicates(node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty";
    }
    node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && curr->data == curr->next->data)
        {
            node *temp = curr->next;
            node *temp1 = curr->next->next;
            delete temp;
            curr->next = temp1;
        }
        else
        {
            curr = curr->next;
        }
    }
}
// remove duplicates from unsorted linked list
// using 2 loops
// tc o(n^2)
void remove_duplicates1(node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }
    node *curr = head;
    while (curr != NULL)
    {
        node *temp = curr;
        while (temp != NULL)
        {
            if ((temp->next != NULL) && temp->next->data == curr->data)
            {
                node *temp1 = temp->next;
                node *temp2 = temp->next->next;
                delete temp1;
                temp->next = temp2;
            }
            else
            {
                temp = temp->next;
            }
        }
        curr = curr->next;
    }
}
// using map
// tc o(n)
// space o(n)
void remove_duplicates2(node *&head)
{
    if (head == NULL)
    {
        cout << "list is empty" << endl;
    }
    node *curr = head;
    node *prev = NULL;
    map<int, bool> visited;
    while (curr != NULL)
    {
        if (visited[curr->data] == true)
        {
            node *temp = curr->next;
            prev->next = curr->next;
            temp = NULL;
            delete temp;
            curr = curr->next;
        }
        else
        {
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        }
    }
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    insertAtBeg(head, 13);
    insertAtBeg(head, 13);
    insertAtBeg(head, 13);

    cout << "linked list:";
    print(head);

    remove_duplicates2(head);
    print(head);

    return 0;
}
