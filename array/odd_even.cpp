#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int j=n-1;
    while(i<j){
        if(arr[i]%2==0){
            if(arr[j]%2!=0){
                swap(arr[i],arr[j]);
                i++;
                j--;
            }
            else{
                j--;
                
            }
        }
        else{
            i++;
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}