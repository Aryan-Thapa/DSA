#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;
void selectionsort(vector<int>&arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minindex])
            {
                minindex=j;
            }
        }
        swap(arr[i],arr[minindex]);
    }
}
void bubblesort(vector<int>&arr,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
void insertionsort(vector<int>&arr,int n)
{
    for(int i=1;i<n;i++)
    {
        //step1 fetch
        int val=arr[i];
        int j=i-1;
        for(;j>=0;j--)
        {
            if(arr[j]>val)
            {
                arr[j+1]=arr[j];
            }
            else
            {
                break;
            }

        }
        arr[j+1]=val;
        

    }
}
void printarray(vector<int>&arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    vector<int>arr{5,6,3,2,9};
    int n=5;
    //selectionsort
    // selectionsort(arr,n);
    // cout<<"sorted array after selection sort is:"<<endl;
    // printarray(arr,n);

    //bubble sort
    // bubblesort(arr,n);
    // cout<<"sorted array after bubble sort is:"<<endl;
    // printarray(arr,n);

    //insertionsort
    insertionsort(arr,n);
    cout<<"sorted array after insertion sort is:"<<endl;
    printarray(arr,n);
    
}