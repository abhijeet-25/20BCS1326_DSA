#include <iostream>

using namespace std;
string removeDuplicates(string s) {
        int i=0;
        while(i<s.length()){
            if(s[i]==s[i+1]){
                s.erase(i,2);
                i=0;
            }
            else{
                i++;
            }
        }
        return s;
    }
// string remove_adjacent_duplicates(string s, int n)
// {
//     int i = 0;
//     int ansindex = 0;
//     while (i < n)
//     {
//         int j = 0;
//         while (j < n)
//         {
//             j = i + 1;

//             if (s[i] != s[j])
//             {
//                 s[ansindex++] = s[i];
//                 i++;
//             }
//             else
//             {
//                 while (s[i] == s[j])
//                 {
//                     j++;
//                 }
//                 int count = j - i;
//                 i = i + count;
//                 s[ansindex++] = s[i];
//             }
//         }
//         i++;
//     }
//     return s;
// }
int main()
{
    string s = "abccbd";
    int n = s.length();
    cout<<removeDuplicates(s);
    // cout << remove_adjacent_duplicates(s, n);
    return 0;
}  