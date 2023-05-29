#include <iostream>
using namespace std;
void printsubsequences(string str,string output,int i)
{
    if(i>=str.length())
    {
        cout<<output<<endl;
        return;
    }
    //exclude
    printsubsequences(str,output,i+1);
    //include
    output.push_back(str[i]);
    printsubsequences(str,output,i+1);
}
int main()
{
    string str;
    cout<<"Enter your String"<<endl;
    cin>>str;
    string out="";
    int i=0;
    printsubsequences(str,out,i);
}