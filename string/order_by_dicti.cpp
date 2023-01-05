// arrange the words acc to dictionary
// approach:compare the ascii values: int(char)
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s1[20] = "abhi";
    char s2[20] = "abhj";
    int i = 0;
    int j = 0;
    while (s1[i] != '\0')
    {
        if (int(s1[i] > int(s2[j])))
        {
            cout << s2 << " " << s1 << endl;
            break;
        }
        else if (int(s1[i]) < int(s2[j]))
        {
            cout << s1 << " " << s2 << endl;
            break;
        }
        else
        {
            cout << s1 << " " << s2 << endl;
            break;
        }
        i++;
        j++;
    }

    return 0;
}