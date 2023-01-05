#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[] = {'z', 'c', 'a', '\0'};
    int i = 0;
    int n = strlen(s);
    for (i = 0; i < n; i++)
    {
        for (int j = 0 ;j < n - i - 1; j++)
        {
            if (int(s[j]) > int(s[j + 1]))
            {
                swap(s[j], s[j + 1]);
            }
        }
    }
    for (int k = 0; k < strlen(s); k++)
    {
        cout << s[k] << endl;
    }

    return 0;
}