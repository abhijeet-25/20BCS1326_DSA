#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout<<"front element:"<<q.front()<<endl;
    q.pop();
    cout<<"front element:"<<q.front()<<endl;
    q.pop();
    q.pop();
    if(q.empty()){
        cout<<"empty queue"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    return 0;
}
