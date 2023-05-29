#include <iostream>
using namespace std;
int main()
{
    int a,b,temp=0;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"Values after swapping is:"<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}