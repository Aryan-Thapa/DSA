#include <iostream>
using namespace std;
#include<vector>
#include<stack>
void printmiddle(stack<int>&s,int &totalsize)
{
    //base case
    if(s.size()==(totalsize/2)+1)
    {
        cout<<"middle element is "<<s.top();
        return;
    }

    int temp=s.top();
    s.pop();
    printmiddle(s,totalsize);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    int totalsize=s.size();
    printmiddle(s,totalsize);
}