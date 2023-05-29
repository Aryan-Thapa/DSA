#include <iostream>
using namespace std;
void printROWwisesum(int arr[][3],int row,int col)
{
    
    for(int i=0;i<row;i++)
    {
        int sum=0;
        for(int j=0;j<col;j++)
        {
            sum=sum+arr[i][j];
        }
        cout<<sum<<endl;
    }
}
int main()
{
    int arr[3][3];
    int rows=3;
    int cols=3;
    cout<<"enter array elements"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>arr[i][j];
        }
    }
    printROWwisesum(arr,rows,cols);
}