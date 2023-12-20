#include <iostream>
using namespace std;
#include<vector>
#include<queue>
#include<stack>
void reverseQueue(queue<int>&q)
{
    stack<int>s;
    //step1 push into stack
    while(!q.empty())
    {
        int element=q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty())
    {
        int element=s.top();
        s.pop();
        q.push(element);
    }
}
void reverseQueuerec(queue<int>&q)
{
    //base case
    if(q.empty())
    {
        return;
    }
    //step A
    int temp=q.front();
    q.pop();
    //step B
    reverseQueuerec(q);
    //step C
    q.push(temp);
}
void reversek(queue<int> &q,int k)
{
    int n=q.size();
    //step 1 q ke k element ko stack mai daalna hai
    if(k==0 || k>n)
    {
        return;
    }
    stack<int>s;
    int count=0;

    
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        s.push(temp);
        count++;

        if(count==k)
        {
            break;
        }
    }
    //step 2 q mai waapis daaldo stack mai se
    while(!s.empty())
    {
        int temp=s.top();
        s.pop();
        q.push(temp);
    }
    //step 3 q ke bache hue element ko pop karke push kardo
    count=0;
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count==n-k)
        {
            break;
        }

    }
}
void interleave(queue<int>  &q)
{
    int n=q.size();
    if(q.empty())
    {
        return;
    }
    int k=n/2;
    int count=0;
    queue<int>q2;
    //step 1
    while(!q.empty())
    {
        int temp=q.front();
        q.pop();
        q2.push(temp);
        count++;
        if(count==k)
        {
            break;
        }
    }
    //step 2
    while(!q.empty() && !q2.empty())
    {
        int first=q2.front();
        q2.pop();
        q.push(first);
        int second=q.front();
        q.pop();
        q.push(second);
    }
    //odd case
    if(n&1)
    {
        int element=q.front();
        q.pop();
        q.push(element);
    }
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);
    // reverseQueuerec(q);
    interleave(q);
    cout<<"printing..."<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}