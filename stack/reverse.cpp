#include <iostream>
using namespace std;
#include<vector>
#include<stack>
void insertAtBottom(stack<int> &s, int target) {
        
         //base case
        if(s.empty()) {
                s.push(target);
                return;
        }

        int topElement = s.top();
        s.pop();
        //rec cal
        insertAtBottom(s, target);
        //BT
        s.push(topElement);
        
}
void reversestack(stack<int>&s)
{
    //bc
    if(s.empty())
    {
        return;
    }
    //a
    int topelement=s.top();
    //b
    s.pop();
    //c
    reversestack(s);
    //d
    insertAtBottom(s,topelement);
}
int main()
{
    stack<int>s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    reversestack(s);
    cout<<"printing"<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
    return 0;

    return 0;
}