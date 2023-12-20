#include <iostream>
using namespace std;
#include <string>
#include <vector>

int subarrays_util(vector<int>&arr,int s,int j)
{
    vector<int>ans;
    if(j==arr.size())
    {
        return 0;
    }
    for(int i=s;i<=j;i++)
    {
        cout<<(arr[i]);  
    }
    cout<<endl;
    subarrays_util(arr,s,j+1);   
}
void subarrays(vector<int> &arr)
{
    
    for(int start=0;start<arr.size();start++)
    {
        int end=start;
        subarrays_util(arr,start,end);
    }
}
int main()
{
    vector<int>arr{1,2,3,4,5};
    cout<<"The subarrays are"<<endl;
    subarrays(arr); 
    return 0;   
}