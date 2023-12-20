#include <iostream>
#include <limits.h>
using namespace std;
int solve(int arr[],int n)
{
    int pathsum=0;
    int maxans=INT_MIN;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            pathsum=pathsum+arr[j];
            maxans=max(pathsum,maxans);
        }
    }
    return maxans;
}
int main()
{
    int arr[3]={1,1,1};
    int n=3;
    int ans=solve(arr,n);
    cout<<"answer is "<<ans<<endl;
}