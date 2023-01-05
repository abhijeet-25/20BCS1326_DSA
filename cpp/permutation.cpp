#include <iostream>
#include <cstring>
using namespace std;
bool ifequal(int arr1[], int arr2[])
{
    int i = 0;
    for (i = 0; i < 26; i++)
    {
        if (arr1[i] != arr2[i])
            return 0;
    }
    return 1;
}
bool getCounts1(char s1[], char s2[], int n1, int n2)
{
    int arr1[26] = {0};
    int count1 = 0;
    for (int i = 0; i < n1; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            count1 = s1[i] - 'a';
        }
        arr1[count1]++;
    }
    // first window
    int arr2[26] = {0};
    int count2 = 0;
    int i=0;
    while (i < n1 && i < n2)
    {
        count2 = s2[i] - 'a';
        arr2[count2]++;
        i++;
    }
    if (ifequal(arr1, arr2))
        return 1;

    // next windows
    while (i < n2)
    {
        char newch = s2[i];
        count2 = newch - 'a';
        arr2[count2]++;

        char oldch = s2[i];
        count2 = oldch - 'a';
        arr2[count2]--;

        i++;

        if (ifequal(arr1, arr2))
            return 1;
    }

    return 0;
}


int main()
{
    char s1[] = "ab";
    char s2[] = "abababa";
    int n1 = strlen(s1);
    int n2 = strlen(s2);
    cout<<getCounts1(s1, s2, n1, n2);
    return 0;
}