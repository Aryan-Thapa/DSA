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
bool checkPalindrome(Node* &head)
{
    if(head==NULL)
    {
        cout<<"LL is Empty"<<endl;
        return true;
    }
    if(head->next==NULL)
    {
        //single Node
        return true;
    }
    //greater than one node

    //step 1 find middle node
    Node* slow = head;
    Node* fast = head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
        }
    }
    //step 2 reverse the ll after the middle/slow node
    Node* reversekahead=reverse(slow->next);
    //step 3 combine the reversed list with the rest of the linked list
    slow->next=reversekahead;
    //step 4 compare the elements
    Node* temp1=head;
    Node* temp2=reversekahead;
    while(temp2!=NULL)
    {
        if(temp1->data!=temp2->data)
        {
           return false;
        }
        else
        {
            temp1=temp1->next;   
            temp2=temp2->next;
        }
        
    }
    return true;
    
    
}
int main()
{
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(20);
    Node* fifth = new Node(10);
    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;
    bool isPalindrome=checkPalindrome(head);
    if(isPalindrome)
    {
        cout<<"LL is Palindrome"<<endl;
    }
    else{
        cout<<"LL is not Palindrome"<<endl;
    }
}