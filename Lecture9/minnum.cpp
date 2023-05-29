#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[]={9,3,5,7,8,2};
    int size=6;
    int minum = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]< minum)
        {
            minum=arr[i];
        }
       
    }
    cout<<"Minimum number in your array is"<<minum<<endl; 
}