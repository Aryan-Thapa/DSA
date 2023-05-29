#include<iostream>
using namespace std;

int main()
{
    int n=007;
    while(n)
    {
        int r=n%10;
        n=n/10;
        cout<<r<<endl;
    }
}