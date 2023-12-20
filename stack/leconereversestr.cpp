#include <iostream>
using namespace std;
#include<vector>
#include<stack>
int main()
{
    string str="aryan";
    stack<char>s;
    cout<<"input string is:"<<endl;
    cout<<str;
    for(int i=0;i<str.size();i++)
    {
        s.push(str[i]);
    }
    cout<<endl;
    cout<<"reversed string is:"<<endl;
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    

}