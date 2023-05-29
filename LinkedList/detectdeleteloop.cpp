#include <iostream>
using namespace std;
class Node
{
    public:
    Node* next;
    int data;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<< temp->data<<" ";
        temp = temp->next;
    }
}
Node* getMiddle(Node* &head)
{
    //empty LL
    if(head==NULL)
    {
        cout<<"Linked List is empty"<<" ";
        return head;
    }
    //Single element
    if(head->next==NULL)
    {
        //only one node therefore
        return head;
    }
    Node* Slow=head;
    //if we want 40 as an output for the even number of nodes case then we will use this particular line of code
    //Node* Fast=head;
    //if we want 30 as an output for both even and odd case then we can use this line of code down below
    Node* Fast=head->next;
    while(Slow!= NULL && Fast!= NULL)
    {
        Fast=Fast->next;
        if(Fast!=NULL)
        {
            Fast=Fast->next;
            Slow=Slow->next;
        }
    }
    return Slow;
}
bool checkForLoop(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return false;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
        {
            return true;
        }
    }
    return false;
}
Node* startingpoint(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
        {
            slow=head;
            break;
        }
    }
    while(slow!=fast)
    {
        slow=slow->next;
        fast=fast->next;
    }
    return slow; 
}
Node* removepoint(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
        if(fast==slow)
        {
            slow=head;
            break;
        }
    }
    Node* prev = fast;
    while(slow!=fast)
    {
        prev=fast;
        slow=slow->next;
        fast=fast->next;
    }
    prev->next=NULL;
}
int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fifth;
    //bool value=checkForLoop(head);
    //cout<<value<<endl;
    cout<<"Starting point of LOOP is "<<startingpoint(head)->data<<endl;

    //print(head);
    //cout<<endl;
    //cout<<"middle of the LL is " << getMiddle(head)->data<<endl;
}