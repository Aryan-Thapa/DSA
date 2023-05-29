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
void print(Node* &head)
{
    Node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
Node* reverserec(Node* &prev, Node* &curr) {
        //base case
        if(curr == NULL) {
                //LL reverse ho chuki
                return prev;
        }
        
        //1 case solve then recursion will take care
        Node* forward = curr -> next;
        curr -> next = prev;

        reverserec(curr, forward);
}
Node* reverse(Node* &head)
{
    Node* prev=NULL;
    Node* curr = head;
    while(curr!=NULL)
    {
        Node* forward = curr->next;
        forward=curr->next;
        curr->next = prev;
        prev = curr;
        curr=forward;
    }
    return prev;

}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    insertAthead(head,tail,10);
    insertAthead(head,tail,20);
    insertAthead(head,tail,30);
    insertAthead(head,tail,40);
    insertAthead(head,tail,50);
    print(head);
    cout<<endl;
    head = reverse(head);
    cout<<"reversed LINKED LIST is:"<<endl;
    print(head);
    //using recursion
    Node* prev = NULL;
    Node* curr = head;
    head=reverserec(prev,curr);
    print(head);

}