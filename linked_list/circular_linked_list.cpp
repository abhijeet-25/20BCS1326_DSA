#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
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
        cout << "remove node for value:" << value << endl;
    }
};
void insertion(node* &tail, int element, int d)
{
    if (tail == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        node *newnode = new node(d);
        newnode->next = curr->next;
        curr->next = newnode;
    }
}
void deletion(node* &tail, int value)
{
    if (tail == NULL)
    {
        cout << "sorry!no node is there to delete" << endl;
        return;
    }
    else
    {
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        if(curr==prev){
            tail=NULL;
        }
        if (tail == curr)
        {
            tail = prev;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
// circular or not 
bool isCircular(node *&head)
{
    if (head == NULL)
    {
        return true;
    }
    node *temp = head->next;
    while (temp != NULL &&  temp != head)
    {
        temp = temp->next;
    }
    if (temp == NULL)
    {
        return false;
    }
    if (temp == head)
    {
        return true;
    }
 return false;
}

void print(node* &tail)
{
    node *temp = tail;
    if(tail==NULL){
        cout<<"empty list"<<endl;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{
    node *tail = NULL;
    // insertion(tail, 5, 33);
    // print(tail);
    // insertion(tail, 33, 6);
    // print(tail);
     if (isCircular(tail))
    {
        cout << "yes circular" << endl;
    }
    else
    {
        cout << "no circukar" << endl;
    }
    // insertion(tail, 6, 7);
    // print(tail);
    // insertion(tail, 6, 8);
    // print(tail);
    // deletion(tail, 33);
    // print(tail);
    // deletion(tail,7);
    // print(tail);
    // deletion(tail,8);
    // print(tail);

    return 0;
}