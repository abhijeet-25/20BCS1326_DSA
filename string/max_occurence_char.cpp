#include <iostream>
#include <cstring>
using namespace std;
void getmaxoccchar(char s[], int n)
{
    // make array of 26 character and inc the count at that index
    int arr[26] = {0};
    int i = 0;
    int count;
    for (i = 0; i < n; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count = s[i] - 'a';
        }
        else
        {
            count = s[i] - 'A';
        }
        arr[count]++;
    }
    // find max count in the array then return the char
    int ans = 0;
    int maxi = -1;
    for (i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    cout << "maximum occurred character is " << char(ans + 'a') << "->" << arr[ans] << " times" << endl;
}
int main()
{
    char s[] = "Test"; // 2times t occurred
    int n = strlen(s);
    getmaxoccchar(s, n);
    return 0;
}
// o(n)----time comp
// o(1)-----space comp