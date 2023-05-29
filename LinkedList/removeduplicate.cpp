Node* deleteDuplicates(Node* &head)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty"<<endl;
        return NULL;
    }
    if(head->next==NULL)
    {
        cout<<"Single element in a linked list"<<endl;
        return head;
    }
    Node* curr=head;
    while(curr!=NULL)
    {
        if((curr->next!=NULL) && curr->val ==curr->next->val)
        {
            Node*temp=curr->next;
            curr->next=curr->next->next;
            temp->next=NULL;
            delete temp;
        }
        else
        {
            curr=curr->next;
        }
    }
    return head;      
}
