// k_anti rotation 
// approach:first print the elements from no of k to last then print from starting to k
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    printf("before:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\nafter:");
    for(int j=k;j<n;j++){
        printf("%d ",arr[j]);
    }
    for(int m=0;m<k;m++){
        printf("%d ",arr[m]);
    }
}