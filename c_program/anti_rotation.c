// anti_cyclic rotation
// approach:print element from second to end then print first element
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("before:");
    for(int j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    printf("\nafter:");
    for(int i=1;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("%d",arr[0]);
}