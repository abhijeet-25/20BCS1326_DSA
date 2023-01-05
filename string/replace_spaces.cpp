// we use extra space for storing the string
#include <iostream>
#include <string>
using namespace std;
string replace_spaces(string s, int n)
{
    int i = 0;
    string temp = "";
    for (i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            temp.push_back('@');
            temp.push_back('4');
            temp.push_back('0');
        }
        else
        {
            temp.push_back(s[i]);
        }
    }
    return temp;
}
// in place replace space
string replace_space(string s, int n)
{
    int i = 0;
    string s2="40";
    string rep = "@40";
    for (i = 0; i < n; i++)
    {
        if(s[i]==' '){
            s[i]='@';
             s.insert(i+1,s2);
             n=n+2;
             i=i+2;
        }
        
        // if (s[i] == ' ')
        // {
        //     s.replace(i, 1, rep);
        // }
    }
    return s;
}
int main()
{
    string s;
    cout << "enter string" << endl;
    getline(cin, s);
    // cout << s << endl;
    int n = s.length();
    // cout << replace_spaces(s, n)<<endl;
    cout << replace_space(s, n);
    return 0;
}