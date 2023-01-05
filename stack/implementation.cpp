// implementing stack using class and its constructor
#include <iostream>
using namespace std;
class stacks
{
public:
// need three variables to implmenet this
    int top;
    int *arr;
    int size;

    stacks(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {

        if (size - top > 1)
        {
            top++;
            arr[top] = element;
            cout << arr[top] << " ";
        }
        else
        {
            cout << "overflow" << endl;
        }
    }
    void pop()
    {
        if (top <= -1)
        {
            cout << "underflow" << endl;
        }
        top--;
    }
    int peek()
    {
        if (top <= -1)
        {
            cout<<"stack is empty"<<endl;
        }
        return arr[top];
    }
    bool isempty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    stacks st(5);
    cout << "elements in the stacks are: ";
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(40);
    st.push(40);

    cout << "\ntop element:" << st.peek();
    st.pop();
    st.pop();
    cout << "\ntop element:" << st.peek() << endl;

    if (st.isempty())
    {
        cout << "empty stack" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }

    return 0;
}