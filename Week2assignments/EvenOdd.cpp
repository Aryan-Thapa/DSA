#include<iostream>
using namespace std;
void EvenOdd(int num)
{
    if(num%2==0)
    {
        cout<<"Even"<<endl;
    }
    else
    {
        cout<<"Odd"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"Entered number is ";
    EvenOdd(n);

}