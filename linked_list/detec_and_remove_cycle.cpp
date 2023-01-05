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
// detect cycle and its starting node
// approach-1 using map tc=o(n) and space o(n)
bool iscycle(node *&head)
{
    if (head == NULL)
    {
        return false;
    }
    node *temp = head;
    map<node *, bool> visited;
    while (temp != NULL)
    {

        if (visited[temp] == true)
        {
            cout << "starting node:" << temp->data << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
// approach 2 -> floyd cycle detection tc-o(n) and space o(1)
// having two pointers slow and fast
// slow pointer move one step while fast pointer moves 2 steps and stops where they both meets that means there is a cycle in a ll
node *iscycle1(node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *slow = head;
    node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
        }
        slow = slow->next;
        if (slow == fast)
        {
            cout << "node in loop:" << fast->data << endl;
            // it will not return the starting node of loop rather it return any node that is a part of loop
            return fast;
        }
    }
    return NULL;
}
// get the starting node from where the loop has started
// so start from inetersection point and slow starts from head
// stops when they both meet
// a+b=k times c
// b is the dist from starting node to intersection
// a is the dist from head to starting node of loop
// c is the dist of whole loop

node *getStartingNode(node *&head)
{
    if (head == NULL)
    {
        return NULL;
    }
    node *intersection = iscycle1(head);
    node *slow = head;
    while (slow != intersection)
    {
        slow = slow->next;
        intersection = intersection->next;
    }
    return slow;
}
// remove the cycle from LL
void removeLoop(node *&head)

{
    if(head==NULL){
        cout<<"list is empty";
    }
    node *temp = getStartingNode(head);
    node *temp1 = temp;
    while (temp->next != temp1)
    {
        temp = temp->next;
    }
    temp->next = NULL;
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
    tail->next = head->next; // to connect last node to 2nd node to make a loop

    if (iscycle(head))
    {
        cout << "cycle" << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    if (iscycle1(head))
    {
        cout << "cycle" << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }

    node *loop = getStartingNode(head);
    cout << "starting node:" << loop->data << endl;
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    removeLoop(head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    if (iscycle1(head))
    {
        cout << "cycle" << endl;
    }
    else
    {
        cout << "no cycle" << endl;
    }
    return 0;
}