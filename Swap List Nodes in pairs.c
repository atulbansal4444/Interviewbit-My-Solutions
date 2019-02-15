/*
For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.

*/
listnode* swapPairs(listnode* A) {
       listnode *h1;
   if(A)
   {
       h1=A->next;
   }
   if(A==NULL || h1==NULL)
   {
       return A;
   }
   else
   {
       listnode * curr = swapPairs(h1->next);
       h1->next=A;
       A->next=curr;
       
       return h1;
   }
}