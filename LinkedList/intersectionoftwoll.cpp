class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        ListNode* a=headA;
        ListNode* b=headB;
        while(a->next!=NULL && b->next!=NULL)
        {
            //both the linked list have same length
            if(a==b)
            {
                return a;
            }
            a=a->next;
            b=b->next;
        } 
        //both linked list have single element
        if(a->next==NULL && b->next==NULL)
        {
            if(a==b)
            {
                return a;
            }
            return 0;
        }
        //headA<headB
        //b LL is bigger than A
        if(a->next==NULL)
        {
            int blen=0;
            while(b->next!=NULL)
            {
                blen++;
                b=b->next;
            }
            while(blen--)
            {
                headB=headB->next;
            }
           
        } 
        else
        //A LL is bigger
        {
            int alen=0;
            while(a->next!=NULL)
            {
                alen++;
                a=a->next;
            }
            while(alen--)
            {
                headA=headA->next;
            }
            
        } 
        while(headA!=headB)
        {
            headA=headA->next;
            headB=headB->next;
        }  
        return headB;
    }
};
