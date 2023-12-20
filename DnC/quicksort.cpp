#include <iostream>
using namespace std;
int partition(int arr[],int s,int e)
{
    //initially pivot index ko s maan rahe hai!!
    int pivotindex=s;
    int pivotelement=arr[s];
    int count=0;
    //find the rightindex for the pivot element by counting smaller elemnents than pivotelement
    for(int i=s+1;i<=e;i++)
    {
        if(arr[i]<=pivotelement)
        {
            count++;
        }
    }
    int rightindex=count+s;
    swap(arr[pivotindex],arr[rightindex]);
    pivotindex=rightindex;
    //now we have to make sure that the elements in the left are smaller than pivot element
    //and the element in right are greater than pivot element
    int i=s;
    int j=e;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivotelement)
        {i++;}
        while(arr[j]>pivotelement)
        {j--;}
        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i],arr[j]);
        }
    }
    return pivotindex;
}
void quicksort(int arr[], int s,int e)
{
    //basecase
    if(s>=e)
    {
        return;
    }
    //partitionlogic
    int p=partition(arr,s,e);
    //rec call
    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main()
{
    int arr[]={8,1,20,30,6,5,60,5};
    int s=0;
    int e=7;
    int n=8;
    cout<<"array after quick sort is: "<<endl;
    quicksort(arr,s,e);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}