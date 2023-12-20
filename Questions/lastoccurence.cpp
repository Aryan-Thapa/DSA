#include<iostream>
using namespace std;
//iterative
int lastoccurence(string &s,char &ch)
{
    int ans=0;
    int n=s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]==ch)
        {
            while(i>ans)
            {
                ans=i;
            }
        }
    }
    return ans;
}
//recursive
int lastoccrecursive(string &s,char &ch,int index,int &ans)
{
    
    int n=s.size();
    if(index>=n)
    {
        return ans;
    }
    if(s[index]==ch)
    {
        ans=index;
    }
    return lastoccrecursive(s,ch,index+1,ans);


}
int main()
{
    int ans=-1;
    string s;
    char ch;
    cout<<"Enter your string"<<endl;
    cin >> s;
    cout<<"enter the character to find its last occurence"<<endl;
    cin >> ch;
    int finalans=lastoccrecursive(s,ch,0,ans);
    cout<<"last occurence of ch is: "<<finalans;
}