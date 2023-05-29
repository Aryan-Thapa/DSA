#include <iostream>
using namespace std;
int main()
{
    int n=524;
    int rem;
    while(n)
    {
        rem=n%10;
        n=n/10;
        cout<<rem<<endl;
    }
}