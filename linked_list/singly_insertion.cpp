#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int d)
    {
        data = d;
        next = NULL;
    }
};
// we use reference beacuse we don't want to create or copy in  new node rather i want to amke chnges in same linked list
void insertAtBeg(node *&head, int d)
{ // new node temp
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}
void insertAtTail(node *&tail, int d)
{
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(node *&head, node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtBeg(head, d);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    node *nodeToNext = new node(d);
    nodeToNext->next = temp->next;
    temp->next = nodeToNext;

    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }
}
// reverse the ll using iterative approach
void reverse3(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << head;
    }
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    head = prev;
}
// void reverse2(node* &head,node* curr,node* prev){
//     if(curr==NULL){
//         head=prev;
//         return;
//     }
//     node* forward=curr->next;
//     reverse2(head,forward,curr);
//     curr->next=prev;

// }
// node* reverse1(node* &head){
//     node* prev=NULL;
//     node* curr=head;
//     reverse2(head,curr,prev);
//     return head;

// }

// kReverse linked list
node *kReverse(node *head, int k)
{
    // base case
    if (head == NULL)
    {
        return head;
    }
    // step 2
    // pehli k node ko reverse krdo iteration se
    node *prev = NULL;
    node *curr = head;
    node *forward = NULL;
    int count = 0;
    while (curr != NULL && count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL)
    {
        // step2 recurion dekhlega aage ke nodes ko
        head->next = kReverse(forward, k);
    }
    return prev;
}
// middle element
void middle(node *&head)
{
    // find the length
    int length = 0;
    node *curr = head;
    while (curr != NULL)
    {
        length++;
        curr = curr->next;
    }
    int ans = (length / 2) + 1;
    cout << "middle element at position:" << ans << endl;
    int count1 = 1;
    node *temp = head;
    while (count1 < ans)
    {
        temp = temp->next;
        count1++;
    }
    cout << temp->data << endl;
}
// 2nd approach
void middle1(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << head << endl;
    }
    node *slow = head;
    node *fast = head->next;
    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
    }
    cout << slow->data;
}
// is LL is circular or not
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
// to traverse the linked list
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
    // creation of node
    node *node1 = new node(10);
    // cout << head->data << endl;
    // cout << head->next << endl;

    node *head = node1;
    insertAtBeg(head, 12);
    // insertAtBeg(head, 13);
    // insertAtBeg(head, 14);
    // insertAtBeg(head, 15);
    // cout << "linked list:";
    // print(head); // 15,14,13,12
    if (isCircular(head))
    {
        cout << "yes circular" << endl;
    }
    else
    {
        cout << "no circukar" << endl;
    }

    // middle(head);
    // middle1(head);
    // head=kReverse(head,2);
    // print(head);
    //   we need to make one node then we can insert at end after that
    // node *node1 = new node(10);
    // node *tail = node1;
    // node *head = node1;
    // insertAtTail(tail, 12);
    // insertAtTail(tail, 13);
    // insertAtTail(tail, 14);
    // insertAtTail(tail, 15);
    // print(head);

    // insertAtPosition(head, tail, 3, 22);
    // print(head);
    // insertAtPosition(head, tail, 1, 22);
    // print(head);
    // insertAtPosition(head, tail, 9, 22);//hoga nhi
    // print(head);

    return 0;
}
