// sum of rows in 2d array
// approach: after first loop make sum=0 so that next rows sum will start from 0  
#include<stdio.h>
int main(){
    int arr[2][3]={{1,2,3},{2,3,4}};
    for(int i=0;i<2;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=*(*(arr+i)+j);
        }
        printf("%d",sum);
    }
}