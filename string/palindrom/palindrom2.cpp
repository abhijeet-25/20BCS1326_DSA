// approach when character are not case sensitive then convert them into either in lower case or upper case
// ch-'A'+'a'------from upper to lower
// ch-'a'+'A'--------from lower to upper
#include <iostream>
#include <cstring>
using namespace std;
char to_lower(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool palindrome(char s[])
{
    int i = 0;
    int j = strlen(s) - 1;
    while (i <= j)
    {
        if (to_lower(s[i]) != to_lower(s[j]))
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
    char s[10];
    cout << "enter string:";
    cin >> s;
    cout<<palindrome(s);

    return 0;
}