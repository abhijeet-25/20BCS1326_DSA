// convert it into lower case and remove spaces and then compare
#include <iostream>
#include <cstring>
using namespace std;
bool valid(char ch)
{
    if ((ch >= 0 && ch <= 9) || (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char to_lower(char ch)
{
    if ((ch >= 0 && ch <= 9) || (ch >= 'a' && ch <= 'z'))
    {
        return ch;
    }
    else
    {
        char k = ch - 'A' + 'a';
        return k;
    }
}
bool is_palindrome(string s, int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (s[i] != s[j])
        {
            return 0;
        }
        else
        {
            i++;
            j--;
        }
       
    }
     return 1;

}
int main()
{
    string s = "Abhiihba";
    int n = s.length();
    string temp = "\0";
    // spaces htado
    for (int i = 0; i < n; i++)
    {
        if(valid(s[i])){
            temp.push_back(s[i]);
        }
    }
    cout<<temp<<endl;
    // lower case
    for (int j = 0; j < temp.length(); j++)
    {
        temp[j] = to_lower(temp[j]);
    }
    cout<<temp<<endl;

    // check palidrome
    cout << is_palindrome(temp, n);
    return 0;
}