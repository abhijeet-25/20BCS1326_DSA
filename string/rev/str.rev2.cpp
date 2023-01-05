#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char s[] = "abhijeet";
    int n = strlen(s);
    int i=0;
    int j=n-1;
    while(i<j){
         swap(s[i],s[j]);
         i++;
         j--;
    }
    for(int k=0;k<n;k++){
        cout<<s[k];
    }
   
    return 0;
}
