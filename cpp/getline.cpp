// take string from user
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string name;
    cout << "enter name:" << endl;
    // cin>>name; ----only read one word not the whole string
    // cin stops the execution when it encountered with space,new ,ine,or tab
    // getline(cin, name);



    char name[10];
    cin.getline(name,10);
    cout << "your name is: " << name << endl;

    return 0;
}
