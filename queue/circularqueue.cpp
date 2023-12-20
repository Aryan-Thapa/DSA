#include <iostream>
using namespace std;
#include<vector>
#include<queue>
//implementing queue from scratch wihtout stl function
class circQueue
{
    public:
    int *arr;
    int size;
    int front;
    int rear;

    circQueue(int size)
    {
        this->size=size;
        arr=new int[size];
        front=-1;
        rear=-1;
    }
    void push(int data)
    {
        //q full
        if(front==0 && rear==size-1)//|| rear=front-1
        {
            cout<<"q is full"<<endl;
        }
        //first element
        else if(front==-1)
        {
            front=rear=0;
            arr[rear]=data;
        }
        //circular nature
        else if(rear==size-1 && front!=0)
        {
            rear=0;
            arr[rear]=data;
        }
        //default
        else
        {
            rear++;
            arr[rear]=data;
        }
    }
    void pop()
    {
        //q is full
        if(front==-1)
        {
            cout<<"q is empty,cannot pop"<<endl;
        }
        //single element
        else if(front==rear)
        {
            arr[front]=-1;
            front=-1;
            rear=-1;
        }
        //circular nature
        else if(front==size-1)
        {
            front=0;
        }
        //default case
        else
        {
            front++;
        }
    }
};