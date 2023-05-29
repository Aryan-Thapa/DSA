#include <iostream>
using namespace std;
void merge(int* arr,int s,int e)
{
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;
    int* left=new int[len1];
    int* right=new int[len2];
    //copy
    int k=s;
    for(int i=0;i<len1;i++)
    {
        left[i]=arr[k];
        k++;
    }
    k=mid+1;
    for(int i=0;i<len2;i++)
    {
        right[i]=arr[k];
        k++;
    }
    //merge
    int leftindex=0;
    int rightindex=0;
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
    //copy
    while(leftindex<len1)
    {
        arr[mainarrayindex++]=left[leftindex++];
    }
    
    while(rightindex<len2)
    {
        arr[mainarrayindex++]=right[rightindex++];
    }
    //delete new arrays

}
void mergeSort(int* arr,int s,int e)
{
    //base case
    //s==e
    if(s>=e)
    {return;}
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);//left part
    mergeSort(arr,mid+1,e);//right part
    merge(arr,s,e);//merge 2 sorted arrays
}
int main()
{
    int arr[]={38,27,43,3,9,20};
    int n=6;
    int s=0;
    int e=5;
    mergeSort(arr,s,e);
    cout<<"Sorted array is"<<endl;
    for(int i=0;i<n;i++)
    {
       cout<< arr[i]<<" "; 
    }
}