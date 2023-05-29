#include <iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60};
    int size=6;
    int start=0;
    int end=size-1;
    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    cout<<"reversed array is"<<endl;
    cout<<"{";
    for(int i=0;i<size;i++)
    {
        //last element will be printed without ','
        if(i==size-1)
        {
          cout<< arr[i];  
        }
        else 
        {
            cout<< arr[i] <<",";
        }
        
    }
    cout<<"}";
}