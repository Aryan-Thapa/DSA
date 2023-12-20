#include <iostream>
using namespace std;
#include<vector>
void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    //creating copy arrays to store the values
    int *left=new int[len1];
    int *right=new int[len2];
    //copy values
    int k=s;
    //filled values in the left array and the right array
    for(int i=0;i<len1;i++)
    {
        left[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        right[i]=arr[k++];
    }
    //merge
    int rightindex=0,leftindex=0;
    int mainarrayindex=s;
    while(leftindex<len1 && rightindex<len2)
    {
        if(left[leftindex]<right[rightindex])
        {
            arr[mainarrayindex++]=left[leftindex++];
        }
        else
        {
            arr[mainarrayindex++]=right[rightindex++];
        }
    }
    while(leftindex<len1)
    {
        arr[mainarrayindex++]=left[leftindex++];
    }
    while(rightindex<len2)
    {
        arr[mainarrayindex++]=right[rightindex++];
    }

}
void mergesort(int *arr,int s,int e)
{
    //basecase
    if(s>=e)
    {
        return;
    }
    //1case sambhalo + rec call
    int mid=(s+e)/2;
    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);
    //merge
    merge(arr,s,e);
}
int main()
{
    int arr[]={38,27,43,3,9,20};
    int s=0;
    int e=5;
    int n=6;
    // vector<int>arr{38,27,43,3,9,20};
    // cout <<"enter your array" <<endl;
    // for(int i=0; i<6; i++)
    // {
    //     cin>>arr[i];
    // }
    // cout<<"your array before sorting is: "<<endl; 
    // for(int i=0; i<6 ;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    cout<<"array after applying merge sort is: "<<endl;
    mergesort(arr,s,e);
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}