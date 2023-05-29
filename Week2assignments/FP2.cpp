#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    for(int row=0;row<n;row++)
    {
        int start=1;
        for(int col=0;col<2*row+1;col++)
        {
            if(col%2==0)
            {
                cout<<start;
                start=start+1;
            }
            else
            {
            cout<<"*";
            }
        }
        cout<<endl;
    }
}