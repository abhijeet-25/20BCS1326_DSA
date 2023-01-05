// sum of 2-d array
#include<stdio.h>
int main(){
    int sum=0;
    int arr[2][3]={{1,2,3},{2,3,4}};
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            sum+=(*(*arr+i)+j);
        }
    }
    printf("%d",sum);
}