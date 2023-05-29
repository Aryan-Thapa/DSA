#include <iostream>
using namespace std;
bool Linearsearch(int arr[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[10];
    int size=10;
    cout<<"Enter array elements"<<endl;
    for (int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"enter the value you want to find in your array"<<endl;
    cin>>key;
    int index;
    for(int i=0;i<size;i++)
    {
        if (arr[i]==key)
        {
        index=i;
        }
        break;
    } 
    int flag=Linearsearch(arr,size,key);
    cout<<flag<<endl;
    if (flag==1)
    {
        cout<<"Element found at index "<<index<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    } 
}