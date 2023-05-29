//hollow rectangle
#include <iostream>
using namespace std;
int main()
{
    int rowcount,colcount;
    
    cin>>colcount;
    cin>>rowcount;
    for(int i=0;i<rowcount;i++)
    {
        if(i==0 || i==rowcount-1)
        {
            for(int j=0;j<colcount;j++)
            {
            cout<<"* ";
            }
        }

        else
        {
        cout<<"* ";
        for(int i=0;i<colcount-2;i++)
        {
            cout<<"  ";
        }
        cout<<"* ";
        }
        cout<< endl;    
    }
    
}