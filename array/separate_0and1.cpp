#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0, 0, 1, 0, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (arr[i] == 1)
        {
            if (arr[j] != 1)
            {
                swap(arr[i], arr[j]);
                j--;
                i++;
                
            }
            else{
                j--;
            }
        }
        else{
            i++;
        
            
        }
      
    }

for (int k = 0; k < n; k++)
{
    cout << arr[k] << endl;
}
return 0;
}
