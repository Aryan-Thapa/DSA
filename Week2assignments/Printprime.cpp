#include<iostream>
using namespace std;
bool checkprime(int num)
{
    for(int i=2;i<num;i++)
    {
        if (num%i==0)
        {
            return false;   
        }
        
    }
    return true;
}
/* int printprime(int num)
   for(int i=2;i<num;i++)
   {
    if checkprime(i);
    {
        return i;
    }
   }
} */
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<"ALL the prime numbers upto "<<n<<" are"<<endl;
    for(int i=2;i<n;i++)
    {
        int c=checkprime(i);

        if (c==1)
        {
            cout<<i<<endl;
        }
    }
}