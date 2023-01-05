// find the mising term in the ap series
// approach:first find the sum of given array then find the sum of ap then subtract them 
#include <stdio.h>
int main()
{
    int sum;
    int sum_ap;

    int arr[] = {12,15,18,24};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("size of array: %d\n ", n);
    for (int i = 0; i < n; i++)
    {
        sum += *(arr + i);
    }
    printf("sum of given array:%d\n ", sum);

    int d = arr[1] - arr[0];
    printf("diff :%d\n", d);

    int a = arr[0];
    printf("first element:%d\n ", a);

    int l = arr[n - 1];
    printf("last element:%d\n ", l);
    n += 1;
    sum_ap = n * (a + l) / 2;
    // another formula
    // sum_ap =(n* (2 * a + (n - 1) * d)) / 2; 
    printf("sum of ap:%d\n ", sum_ap);

    int missing_element = sum_ap - sum;
    printf("missing term:%d\n ", missing_element);
}