#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int start=1;
    for(int row=0;row<n;row++)
    {
        for(int col=start;col<=n;col++)
        {
            if(row==0||col==start)
            {
                cout<<col;
            }
            else if (col==n)
            {
                cout<<n;
            }
            
            else
            {
                cout<<" ";
            }
        }
       start=start+1;
       cout<<endl;
    }
}