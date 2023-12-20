#include <iostream>
using namespace std;

class Node{
        public:
        int data;
        Node* prev;
        Node* next;

        Node() {
                this->data = 0;
                this->prev= NULL;
                this->next = NULL;
        }
        Node(int data) {
                this->data = data;
                this->prev = NULL;
                this->next = NULL;
        }

        ~Node() {
                cout << "Node with value: " << this->data << " deleted" << endl;
        }
};
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
void print(Node* head)
{
    Node* temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* reverse(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
       Node* next=curr->next;
       next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
    }
    return prev;
}
Node* getNthFromLast(Node *head, int n)
{
    Node* reversehead=reverse(head);
    Node* temp=reversehead;
    int 
    while(n)
    {
        temp=temp->next;
    }
    int ans=temp->data;
    return ans;

}
Node* reverse(Node* &head)
{
    Node* prev=NULL;
    Node* curr=head;
    while(curr!=NULL)
    {
       Node* next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
    }
    return prev;
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
//myapproach
int getNthFromLast(Node *head, int n)
{
    int length=getlength(head);
    if(head==NULL)
    {
        cout<<"linked list is empty"<<endl;
        return -1;
    }
    if(head->next==NULL)
    {
        if(n<=length)
        {
            int ans=head->data;
            return ans;
        }
        else
        {
            return -1;
        }
    }
    if(n>length)
    {
        return -1;
    }
    head=reverse(head);
    Node* temp=head;
    int i=1;
    while(i<n)
    {
        temp=temp->next;
        i++;
    }
    int ans=temp->data;
    return ans;       
}
void* func(Node* &head,int position,int ans)
{
    if(head==NULL)
    {
        return NULL;
    }
    func(head->next,position,ans);
    if(position==0)
    {
        ans=head->data;
    }
    position--;
}
int getNode(Node* &head,int position)
{
    int ans=-1;
    func(head,position,ans);
    return -1;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertAthead(head,tail,9);
    insertAthead(head,tail,8);
    insertAthead(head,tail,7);
    insertAthead(head,tail,6);
    insertAthead(head,tail,5);
    insertAthead(head,tail,4);
    insertAthead(head,tail,3);
    insertAthead(head,tail,2);
    print(head);
    
}


