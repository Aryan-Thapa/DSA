#include<iostream>
using namespace std;
#include<string>
bool checkpalindrome(string &str,int i,int n)
{
    if(i>n)
    {
        return true;
    }
    if(str[i]!=str[n])
    {
        return false;
    }
    checkpalindrome(str,i+1,n-1);
}
int main()
{
    string str;
    cout<<"enter a  string"<<endl;
    cin>>str;
    bool ans=checkpalindrome(str,0,str.size()-1);
    if(ans)
    {
        cout<<"entered string is palindrome"<<endl;
    }
    else
    {
        cout<<"Not palindrome"<<endl;
    }
}