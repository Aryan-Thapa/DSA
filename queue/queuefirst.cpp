#include <iostream>
using namespace std;
#include<vector>
#include<queue>
//implementing queue from scratch wihtout stl function
class Queue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=0;
        rear=0;

    }
    void push(int data)
    {
        if(rear==size)
        {
            cout<<"Q is full"<<endl;
        }
        else{
            arr[rear]=data;
            rear++;
        }
    }
    void pop()
    {
        if(rear==front)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            arr[front]=-1;
            front++;
            if(front==rear)
            {
                front=0;
                rear=0;
            }
        }
    }
    int getfront()
    {
        if(front==rear)
        {
            cout<<"queue is empty"<<endl;
        }
        else
        {
            return arr[front];
        }
    }
    bool isempty()
    {
        if(front==rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int getsize()
    {
        return rear-front;
    }
};
int main()
{
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout<<"size of queue is "<<q.getsize()<<endl;
    q.pop();
    cout<<"size of queue is "<<q.getsize()<<endl;
    cout<<"front element is: "<<q.getfront()<<endl;
    if(q.isempty())
    {
        cout<<"queue is empty"<<endl;
    }
    else
    {
        cout<<"queue isnt empty"<<endl;
    }
    //printing all the elements
    cout<<"printing..."<<endl;
    while(!q.isempty())
    {
        cout<<q.getfront()<<endl;
        q.pop();
    }
}