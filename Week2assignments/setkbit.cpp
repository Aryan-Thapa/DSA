#include<iostream>
using namespace std;
int setKthBit(int N, int K)
    {
        // Write Your Code here
        int mask=1<<K;
        int value=N|mask;
        return value;
    }

int main()
{
    int n;
    cout<<"enter N"<<endl;
    cin>>n;
    int updatednum=setKthBit(n,2);
    cout<<"Value after setting the kth bit is "<<updatednum<<endl;
}
    
    
