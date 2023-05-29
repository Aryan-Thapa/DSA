#include<iostream>
using namespace std;
int factorial(int num)
{
    for(int i=num-1;i>0;i--)
    {
        num=num*i;
    }
    return num;
}
int main()
{
    int n;
    cout<<"enter a number"<<endl;
    cin>>n;
    int fact=factorial(n);
    cout<<"Factorial of the given number is "<<fact<<endl; 
}