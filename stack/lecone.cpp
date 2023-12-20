#include <iostream>
using namespace std;
#include<vector>
#include<stack>
int main()
{
    //creation
    stack<int>st;
    //insertion
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    //remove
    st.pop();
    //extracting top element from stack
    cout<<"element on top is "<<st.top()<<endl;
    //getting size of the stack 
    cout<<"size of stack is "<<st.size()<<endl;
    //check whether the stack is empty or not
    if(st.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack isnt empty"<<endl;
    }
    //printing a stack
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}