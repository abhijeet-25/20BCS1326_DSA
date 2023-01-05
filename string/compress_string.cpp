#include <iostream>
#include <string>
#include <cstring>
using namespace std;
string compress(string s, int n)
{
    int i = 0;
    int ansindex = 0;
    while (i < n)
    {
        int j = i + 1;
        while (j < n && s[i] == s[j])
        {
            j++;
        }
        s[ansindex++] = s[i];
        int count = j - i;
        if (count > 1 && count <10)
        {
            string ss = to_string(count);
            for (char ch : ss)
            {
                s[ansindex++] = ch;
            }
        }
        i = j;
    }
    return s;
}
int main()
{

    string s = "aabccddaa";
    int n = s.length();
    cout << n << endl;
    cout << compress(s, n);
    return 0;
}