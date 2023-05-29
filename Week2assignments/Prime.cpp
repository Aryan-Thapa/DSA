#include<iostream>
using namespace std;
void checkprime(int num)
{
    for(int i=2;i<num/2;i++)
    {
        if (num%i==0)
        {
            cout<<"Not Prime"<<endl;
            break;
        }
        else
        {
            cout<<"Prime"<<endl;
            break;
        }
    }
}
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    cout<<"Entered number is ";
    checkprime(n);


}