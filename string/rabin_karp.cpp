#include <iostream>
#include <cstring>
using namespace std;

void search(char pat[], char txt[], int q)
{
    int m = strlen(pat);
    int n = strlen(txt);
    int p = 0;
    int d = 10;
    int i, j;
    int t = 0;
    int h = 1;
    int flag = 0;

    for (int i = 0; i < m - 1; i++)

        h = (h * d) % q;

    // cout<<h<<endl;

    // find pattern of text and first window
    for (i = 0; i < m; i++)
    {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }

    // check if hash value for pat and  text is same or not if it is same them match the character
    for (i = 0; i <= n - m; i++)
    {
        if (p == t)
        {
            for (j = 0; j < m; j++)
            {
                if (txt[i + j] != pat[j])
                {
                    break;
                }
            }

            if (j == m)

                cout << "found at index " << i << endl;
            flag = 1;
        }
        // jump to next window and calculate hash value for txt
        if (i < n - m)
        {
            t = (d * (t - txt[i] * h) + txt[i + m]) % q;
            if (t < 0)

                t = (t + q);
        }
        // if hash for txt is negative the make it positive
    }
    // if in whole string pat does not found then print
    if (flag != 1)
    {
        cout << "pattern not found" << endl;
    }
}

int main()
{
    char txt[] = "abbabd abc abc";
    char pat[] = "abc";
    int q = INT_MAX;
    search(pat, txt, q);
    return 0;
}