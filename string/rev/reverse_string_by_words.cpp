// first reverse the whole string then revse each words
#include <iostream>
#include <cstring>
using namespace std;
string rev_string_by_words(char s[], int n)
{
    // reverse the whole string
    int i = 0;
    int j = n - 1;
    int k = 0;
    int l = 0;
    while (i <= j)
    {
        swap(s[i++], s[j--]);
    }
    // reverse each words
    for (i = 0; i <= n; i++)
    {
        if (s[l] == ' ' || s[l] == '\0')
        {
            int e = l - 1;

            while (k < e)
            {
                swap(s[k++], s[e--]);
            }
            k = l + 1;
        }
        l++;
    }

    return s;
}
int main()
{
    char s[] = "abhijeet is good";
    int n = strlen(s);
    cout << rev_string_by_words(s, n);
    return 0;
}