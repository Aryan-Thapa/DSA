#include <iostream>
using namespace std;
#include<vector>
#include<stack>
class Stack
{
    public:
    //properties
    //dynamic array
    int *arr;
    //index of top element
    int top;
    //size of array
    int size;
    Stack(int size)
    {
        arr=new int[size];
        this->size=size;
        top=-1;
    }
    void push(int data)
    {
        //check for space
        if(size-top>1)
        {
            //space available
            //insert
            top++;
            arr[top]=data;
        }
        else
        {
            cout<<"space is not available"<<endl;
        }
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            //not empty
            top--;
        }
    }
    int gettop()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {
            return arr[top];
        }
    }
    int getsize()
    {
        if(top==-1)
        {
            //stack is empty
            return 0;
        }
        else
        {
            return top+1;
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    //creation
    Stack s(10);
    //insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    //deletion
    s.pop();

    cout<<s.gettop()<<endl;

    //printing a stack
    while(!s.isempty())
    {
        cout<<s.gettop()<<" ";
        s.pop();
    }
}