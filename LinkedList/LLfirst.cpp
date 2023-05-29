//Singly Linked List 
#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node()
    {
        this->data=0;
        this->next=NULL;
    }
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
    
};
//insertion
void insertAthead(Node* &head,Node* &tail,int data)
{
    //if LL is empty
    if(head==NULL)
    {
       Node* newNode=new Node(data);
       head=newNode;
       tail=newNode;
       return;
       
    }
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
    
}
void insertAttail(Node* &head,Node* &tail,int data)
{
    //if LL is empty
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
        return;  
    }
    Node* newNode=new Node(data);
    tail->next = newNode;
    tail = newNode;
}
void print(Node* head)
{
    Node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int getlength(Node* &head)
{
    int len=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;

}
void insertATposition(Node* &head,Node* &tail,int data,int position)
{
    //if LL is empty
    if(head==NULL)
    {
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode; 
        return; 
    }
    //insert at first position
    if(position==1)
    {
        insertAthead(head,tail,data);
        return;
    }
    //last position
    int length=getlength(head);
    while(position>=length)
    {
        insertAttail(head,tail,data);
        return;
    }
    //insert at position
    //find prev and curr
    Node* prev= head;
    int i=1;
    while (i<position-1)
    {
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    Node* newNode=new Node(data);
    newNode->next=curr;
    prev->next=newNode;
}
//deletion
void deletenode(int position, Node* &head,Node* &tail)
{
    if(head==NULL)
    {
        cout<<"Linked List is empty"<<endl;
        return;
    }
    //deleting 1st node
    if(position==1)
    {
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    int len=getlength(head);
    //deleting the last node
    if(position==len)
    {
        Node* prev=head;
        int i=1;
        while(i<position-1)
        {
            prev=prev->next;
            i++;
        }
        Node* temp=tail;
        prev->next=NULL;
        tail=prev;
        delete temp;
    }
    //deleting the middle node
    //find the prev and curr node
    Node* prev=head;
    int i=1;
    while(i<position-1)
    {
        prev=prev->next;
        i++;
    }
    Node* curr=prev->next;
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    insertAthead(head,tail,10);
    insertAthead(head,tail,20);
    insertAthead(head,tail,30);
    insertAthead(head,tail,40);
    insertATposition(head,tail,100,2);
    insertAttail(head,tail,70);
    deletenode(1,head,tail);
    print(head);
}

    


