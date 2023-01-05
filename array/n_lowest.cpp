#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 2, 7, 6, 1, 5};
    int l=2;
    int i;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    for(i=0;i<l;i++);
    cout<<"\nlowest number "<<arr[i]<<endl;

    return 0;
}
