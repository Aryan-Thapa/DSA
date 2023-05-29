#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
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
void print(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node * sort(Node* &head)
{
    //dummies nodes
    Node* zerohead=new Node(-1);
    Node* zerotail=zerohead;

    Node* onehead=new Node(-1);
    Node* onetail=onehead;

    Node* twohead=new Node(-1);
    Node* twotail=twohead;
    //traverse the original LL
    Node* curr= head;
    while(curr!=NULL)
    {
        if(curr->data==0)
        {
            //seperate out zero wali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            //append the zero node in zero head LL
            zerotail->next=temp;
            zerotail=temp;
        }
        else if(curr->data==1)
        {
            //seperate out zero wali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            //append the zero node in zero head LL
            onetail->next=temp;
            onetail=temp;
        }
        else if(curr->data==2)
        {
            //seperate out zero wali node
            Node* temp=curr;
            curr=curr->next;
            temp->next=NULL;
            //append the zero node in zero head LL
            twotail->next=temp;
            twotail=temp;
        } 
    }
    //modifying the lists by deleting the dummies node of second and third list
    //modifying list of 1s
    
    Node*temp1=onehead;
    onehead=onehead->next;
    temp1->next=NULL;
    delete temp1;
    
    
    //modifying list of 2s
    
    Node*temp2=twohead;
    twohead=twohead->next;
    temp2->next=NULL;
    delete temp2;
    
    //join the lists
    if(onehead!=NULL)
    {
        zerotail->next=onehead;
        if(twohead!=NULL)
        {
            onetail->next=twohead;
        }
    }
    else
    //onehead is NULL that is one wali node khali hai
    {
        if(twohead!=NULL)
        {
            zerotail->next=twohead;
        }
    }
    //remove zerohead dummy node
    Node* temp3=zerohead;
    zerohead=zerohead->next;
    temp3->next=NULL;
    delete temp3;

    //return head of the modified Linked List
    return zerohead;
}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertAthead(head,tail,2);
    insertAthead(head,tail,1);
    insertAthead(head,tail,0);
    insertAthead(head,tail,1);
    insertAthead(head,tail,1);
    insertAthead(head,tail,0);
    insertAthead(head,tail,2);
    insertAthead(head,tail,2);
    cout<<"Input Linked List is: ";
    print(head);
    cout<<endl;
    cout<<"Linked list after sorting is "<<endl;
    Node* head2=sort(head);
    print(head2);
}