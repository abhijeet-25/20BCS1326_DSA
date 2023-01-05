// k_cyclic_rotation 
// approach : print the elements first from where the n-k to the last then print from starting to n-k
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("before:");
    for (int a = 0; a < n; a++)
    {
        printf("%d ", arr[a]);
    }
    int k=4;
    // scanf("enter how many times you want to rotate:%d ", &k);
    printf("\nafter:");

    for (int i = n - k; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int j = 0; j < n-k; j++)
    {
        printf("%d ", arr[j]);
    }
}