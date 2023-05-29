#include <iostream>
#include <limits.h>
using namespace std;
int main()
{
    int arr[]={2,3,5,7,8,2,9};
    int size=7;
    int maxnum = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxnum)
        {
            maxnum=arr[i];
        }
       
    }
    cout<<"Minimum number in your array is "<< maxnum <<endl; 
}