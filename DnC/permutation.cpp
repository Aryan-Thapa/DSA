#include <iostream>
using namespace std;
void printpermutation(string &str,int i)
{
    if(i>=str.length())
    {
        cout<<str<<" ";
        return;
    }
    for(int j=i;j<str.length();j++)
    {
        // 1case smbhalo
        swap(str[i],str[j]);
        //rec call
        printpermutation(str,i+1);
        //backtrack
        swap(str[i],str[j]);

    }
}
int main()
{
    string str="abc";
    printpermutation(str,0);
}