#include <iostream>
using namespace std;
#include<vector>
bool binarysearch(vector<int>&v, int s,int e,int key)
{
    //case1 not found
    //base case
    if(s>e)
    {return false;}
    int mid=s+e/2;
    //case2 element found
    if(v[mid]==key)
    {return true;}
    if(v[mid]<key)
    {return binarysearch(v, mid+1,e,key);}
    else
    {return binarysearch(v,s,mid-1,key);}
}
int main()
{
    vector<int>v{10,40,70,90,100};
    int n=v.size();
    int s=0;
    int e=n-1;
    int target;
    cout<<"Enter element you want to search"<<endl;
    cin>>target;
    bool inarray=binarysearch(v,s,e,target);
    if(inarray==1)
    {
        cout<<"Element found"<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }

}
