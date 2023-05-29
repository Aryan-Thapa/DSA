#include<iostream>
using namespace std;
int main()
{
    int n=9;
    for(int row=0;row<n;row++)
    {

        for(int col=0;col<row;col++)
        {
            if (col==0 || row == n-1)
            {
                cout<<col+1;
            }
            else if (col==row-1)
            {
                cout<<col+1;
            }
            else
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}