// approach 1: take a extra memory to store the straing then reverse the string then compare them
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char s[10];
    cout<<"enter string:";
    cin>>s;
    int i=0;
    string p=s;
    int j=strlen(s)-1;
    while(i<j){
        swap(s[i++],s[j--]);
    }
    for(int i=0;i<strlen(s);i++){
               s[i];
    }
    // check
    if(p==s){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    return 0;
}