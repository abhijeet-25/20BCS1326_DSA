#include <stdio.h>
int main()
{
    char s1[20] = "abhijeet";
    char s2[20]="kaur";
    int i = 0;
    int j = 0;
    while(s1[i] != '\0')
    {
        s2[j] = s1[i];
        i++;
        j++;
    }
    printf("%s", s2);
    return 0;
}