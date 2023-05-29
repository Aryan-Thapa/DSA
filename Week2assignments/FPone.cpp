#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        int start=8-row;
        int num=row+1;
        int count=num;
        for(int col=0;col<17;col++)
        {
            if (col==start && count>0)
            {
                cout<<num;
                start=start+2;
                count--;
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
}