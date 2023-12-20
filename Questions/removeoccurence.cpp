#include<iostream>
using namespace std;
#include<string>
string removeoccurence(string &s,string &part)
{
    int index=s.find(part);
    //basecase
    if(index==string::npos)
    {
        return s;
    }
    else
    {
        s.erase(index,part.size());
    }
    removeoccurence(s,part);
    return s;
}
int main()
{
    
    string s;
    cout<<"Enter a string"<<endl;
    cin>>s;
    string part;
    cout<<"enter the part or a sustring to remove"<<endl;
    cin>>part;
    string ans=removeoccurence(s,part);
    cout<<"string after removing all the occurence of the substring "<<part <<"is: "<<ans;
}