// reverse each word in a string 
#include<iostream>
#include<cstring>
using namespace std;
string rev_words(char s[],int n){
    int i=0;
    int j=0;
    int k=0;
    for(i=0;i<=n;i++){
        if(s[j]==' '||s[j]=='\0'){
            int e=j-1;
            while(k<=e){
                swap(s[k++],s[e--]);
            }
            k=j+1;
        }
        j++;
    }
    return s;

}
int main()
{
    char s[]="abhijeet is good";
    int n=strlen(s);
    cout<<rev_words(s,n);
    return 0;
}