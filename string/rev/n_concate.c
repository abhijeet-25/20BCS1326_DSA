#include <stdio.h>
int main()
{
    char str1[20] = "abhi";
    char str2[20] = "jeet";
    int n = 5;
    int i = 0;
    int j = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    for (j = 0; j < n; j++,i++)
    {
        str1[i] = str2[j];
        
    }
    str1[i] = '\0';
    printf("%s", str1);
    return 0;
}