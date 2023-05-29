#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    cout<<"Enter array elements"<<endl;
    for(int i=0;i<10;i++)
    {
        cin>>arr[i];
    }
    cout<<arr<<endl;
    int *p=arr;
    cout<<p<<endl;
    cout<<&p<<endl;
    cout<<*p<<endl;
}