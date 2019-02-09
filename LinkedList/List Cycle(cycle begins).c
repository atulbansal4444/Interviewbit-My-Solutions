ListNode* Solution::detectCycle(ListNode* A) {

    if(A==NULL || A->next == NULL)
            return NULL;
        ListNode *s = A;
        ListNode *f = A;
        while(s!=NULL && f!=NULL && f->next!=NULL)  {
            s=s->next;
            f=f->next->next;
            if(s==f)
                break;
        }
        if(s!=f)
            return NULL;
            
        s = A; 
        while (s != f) { 
            s = s->next; 
            f = f->next; 
        }
    return s; 
}