// sum of columns of 2d array
// approach : exchnge the no. of rows and columns 
#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{2,3,4}};
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<2;j++){
            sum+=(*(*arr+j)+i);
        }
        printf("%d ",sum);
    }
}