// reverse the array using pointer
#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("before:");
    for(int j=0;j<n;j++){
        printf("%d ",*(arr+j));
    }
printf("\nafter:");
    for(int i=n-1;i>=0;--i){
        printf("%d ",*(arr+i));
    }
}