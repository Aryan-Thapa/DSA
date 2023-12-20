#include <iostream>
#include<string.h>
using namespace std;
bool checkpalindrome(char name[],int n)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
        if(name[s]==name[e])
        {
            s++;
            e--;
        }
        else{
            return false;
        }
    }
    return true;
}
int main()
{
    int length=0;
    char name[100];
    cout<<"enter your full name"<<endl;
    // cin>>name; using this only first name will be printed
    cin.getline(name,100);
    cout<<"your full name is "<<name<<endl;
    int i=0;
    while(name[i]!='\0')
    {
        length++;
        i++;
    }
    cout<<"length of your name is "<<length<<endl;
    // cout<<"length of your name is "<<strlen(name)<<endl;

    //reverse a string
    int s=0;
    int e=length-1;
    while(s<e)
    {
        swap(name[s],name[e]);
        s++;
        e--;
    }
    cout<<"reversed name is "<<name<<endl;
    bool ispal=checkpalindrome(name,length);
    if(ispal==1)
    {
        cout<<"entered string is palindrome"<<endl;
    }
    else
    {
        cout<<"entered string is not palindrome"<<endl;
    }
    return 0;
}