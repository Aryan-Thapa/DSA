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
    return temp->data;

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


