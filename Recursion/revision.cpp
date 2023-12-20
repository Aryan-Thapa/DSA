#include <iostream>
using namespace std;
#include<vector>
#include<string>
#include<limits.h>
void solve(string &s,int i,char ch,int &ans)
{
    //base case
    if(i>s.size())
    {
        return;
    }
    //processing
    if(s[i]==ch)
    {
        ans=max(ans,i);
    }
    //recursive call
    solve(s,i+1,ch,ans);
}
void recursivereverse(string &s,int i,int j)
{
    //base case
    if(i>=j)
    {
        return;
    }
    //processing
    swap(s[i],s[j]);
    recursivereverse(s,i+1,j-1);
}
void printstring(string &s)
{
    for(int i=0;i<s.size();i++)
    {
        cout<<s[i];
    }
    cout<<endl;
}
int main()
{
    string s="Aryan";
    char ch='d';
    int i=0;
    int j=s.size()-1;
    int ans=INT_MIN;
    //solve(s,i,ch,ans);
    //cout<<ans<<endl;
    cout<<"input string is"<<endl;
    printstring(s);
    recursivereverse(s,i,j);
    cout<<"reverse string is"<<endl;
    printstring(s);

    
}