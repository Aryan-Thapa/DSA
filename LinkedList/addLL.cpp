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
void print(Node* &head) {
        Node* temp = head;

        while(temp != NULL) {
                cout << temp -> data << " ";
                temp = temp->next;
        }
}
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
Node* solve(Node* &head,Node* &head2)
{
    //step1 reverse both LL
    head= reverse(head);
    head2=reverse(head2);

    //add both the Linked list
    Node* anshead=NULL;
    Node* anstail=NULL;
    int carry=0;
    while(head!=NULL && head2!=NULL)
    {
        //calculate sum
        int sum=carry + head->data + head-> data;
        //calculate digit
        int digit=sum % 10;
        //calculate carry
        carry=sum/10;
        //create a new node for the digit
        Node* newNode = new Node(digit);
        //attach the newnode into answer wali linked list
        if(anshead == NULL)
        {
            anshead=newNode;
            anstail=newNode;
        } 
        else
        {
            anstail ->next =newNode;
            anstail= newNode;
        }
        head=head->next;
        head2=head2->next;
    }
    //jab head1 list ki length head2 se jyada hai
    while(head!=NULL)
    {
        int sum =carry + head->data;
        int digit=sum%10;
        carry = sum/10;
        Node* newNode=new Node(digit);
        anstail->next=newNode;
        anstail=newNode;
        head=head->next;
    }
    //jab head2 list ki length head1 se jyada hai
    while(head2!=NULL)
    {
        int sum =carry + head2->data;
        int digit=sum%10;
        carry = sum/10;
        Node* newNode=new Node(digit);
        anstail->next=newNode;
        anstail=newNode;
        head2=head2->next;
    }
    //handle carry seperately
    while(carry !=0)
    {
        int sum=carry;
        int digit=sum%10;
        carry=sum/10;
        Node* newNode=new Node(digit);
        anstail->next=newNode;
        anstail=newNode;
    }

    anshead=reverse(anshead);
    return anshead;
}
int main()
{
    //LL1
    Node* head=NULL;
    Node* tail=NULL;
    insertAthead(head,tail,4);
    insertAthead(head,tail,2);
    
    //ll2
    Node* head2=NULL;
    Node* tail2=NULL;
    insertAthead(head2,tail2,4);
    insertAthead(head2,tail2,3);
    insertAthead(head2,tail2,2);
    Node* ans=solve(head,head2);
    cout<<"answer after adding both the lists is: "<<endl;
    print(ans);

}