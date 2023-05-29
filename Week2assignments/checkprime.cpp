#include<iostream>
using namespace std;
bool checkprime(int num)
{
    for(int i=2;i<=num/2;i++)
    {
        if (num%i==0)
        {
            return false;
            break;   
        }
    
    }
    return true;
}
int main()
{
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    bool check=checkprime(n);
    if(check!=0)
    {
        cout<<" prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }
    return 0;
}