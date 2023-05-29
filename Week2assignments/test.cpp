#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        int start=row;
        for(int col=0;col<row;col++)
        {
            cout<<start;
            start=start-1;
        }
        cout<<endl;
    }
}