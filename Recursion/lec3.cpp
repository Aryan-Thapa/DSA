#include <iostream>
using namespace std;
#include<vector>
bool checksorted(vector<int>&arr,int &n,int i)
{
    if(i==n-1)
    {
        return true;
    }
    if(arr[i+1]<arr[i])
    {
        return false;
    }
    return checksorted(arr,n,i+1);
}
int main()
{
    vector<int>v{10,20,30,40,50};
    int n=v.size();
    int i=0;
    //cout<<n;
    bool issorted=checksorted(v,n,i);
    if(issorted==1)
    {
        cout<<"Array is Sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }


}