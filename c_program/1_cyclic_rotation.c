// one cyclic rotation 
//    eg: 1 2 3 4 5
//output: 5 1 2 3 4
// approach:print the last element first then print all element from starting
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("before rotation:");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    printf("\nafter one rotation:%d ", arr[n - 1]);
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}