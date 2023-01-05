#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[] = "abhijeet is good";
    int n = strlen(s);
    for (int i = n - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    return 0;
}
// another way
// i=0;
// j=n-1;
// then swap it 
// so that address can also chnge 
// but above logic can not chnge the address at backend