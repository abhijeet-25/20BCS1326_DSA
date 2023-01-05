#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string str = "abhijeet";
    stack<char> s;
    // traverse the string and pushing all the char into the stack
    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];
        s.push(ch);
    }
    string ans = ""; //consider empty string to store the reverse string
    while (!s.empty())
    {
        char ch = s.top();  //extract the top element ans put it into the ans
        ans.push_back(ch);

        s.pop(); //pop the top element
    }
    cout << "reverse:" << ans;

    return 0;
}