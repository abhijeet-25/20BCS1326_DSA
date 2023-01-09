#include<iostream>
#include<queue>
using namespace std;
int main()
{
    deque<int>q;
    q.push_back(10);
    q.push_front(20);
    q.push_back(30);
    q.push_front(40);
    cout<<"front element:"<<q.front()<<endl;
    q.pop_front();
    cout<<"front element:"<<q.front()<<endl;
    q.pop_back();
    cout<<"front element:"<<q.front()<<endl;
    q.pop_front();
    q.pop_front();
    if(q.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"not empty"<<endl;
    }

    return 0;
}