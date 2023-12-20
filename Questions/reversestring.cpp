// #include<iostream>
// using namespace std;
// #include<string>
// string reversestr(string &s,int i,int j)
// {
//     if(i>=j)
//     {
//         return s;
//     }

//     swap(s[i],s[j]);
//     reversestr(s,i+1,j-1);
// }
// int main()
// {
//     string s;
    
//     cout<<"enter a string"<<endl;
//     cin>>s;
//     s=reversestr(s,0,s.size()-1);
//     cout<<"reversed string is "<<s;
// }
#include<iostream>
using namespace std;
#include<string>
void reversestr(string &s,int i,int j)
{
    if(i>=j)
    {
        return;
    }
    swap(s[i],s[j]);
    reversestr(s,i+1,j-1);
}
int main()
{
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    reversestr(s,0,s.size()-1);
    cout<<"reversed string is "<<s;
}