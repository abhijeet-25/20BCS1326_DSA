#include <iostream>
#include<queue>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node *bulidTree(node *root)
{
    cout << "enter data:" << endl;
    int data;
    cin >> data;
    root = new node(data);
    // base case
    if (data == -1)
    {
        return NULL;
    }
    cout << "enter value in left of " << data << endl;
    root->left = bulidTree(root->left);
    cout << "enter value in right of " << data << endl;
    root->right = bulidTree(root->right);
    return root;
}
void levelordertraversal(node* root){
    // use of queue
    queue<node*>q;
    // push the root element
    q.push(root);
    // push null to separte level
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        // sepator logic
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
// tree traversal
void inorder(node* root){
    // base case
    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    }
void preorder(node* root){
    // base case
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    }
void postorder(node* root){
    // base case
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
    }
// build level order tree
void bulidlevelordertree(node* &root){
    cout<<"enter data of root :"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        cout<<"enter data left of:"<<temp->data<<endl;
        int leftdata;
        cin>>leftdata;
        if(leftdata!=-1){
            temp->left=new node(leftdata);
            q.push(temp->left);
        }

        cout<<"enter data right of:"<<temp->data<<endl;
        int rightdata;
        cin>>rightdata;
        if(rightdata!=-1){
            temp->right=new node(rightdata);
            q.push(temp->right);
        }
    }
}
int main()
{
    node *root = NULL;
    // root = bulidTree(root);
    // cout<<"level order:"<<endl;
    // levelordertraversal(root);
    // cout<<"inorder:"<<endl;
    // inorder(root);
    // cout<<endl;
    // cout<<"preorder:"<<endl;
    // preorder(root);
    // cout<<endl;
    // cout<<"postorder:"<<endl;
    // postorder(root);

    bulidlevelordertree(root);
    levelordertraversal(root);


    return 0;
}