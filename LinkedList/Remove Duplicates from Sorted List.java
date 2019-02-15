/*
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3
*/

public class Solution {
    public ListNode deleteDuplicates(ListNode A) {
        if(A==null || A.next == null)
            return A;
            
            ListNode curr = A;
            ListNode temp;
            while(curr.next!=null)
            {
                if(curr.val==curr.next.val)
                {
                    curr.next = curr.next.next;
                }
                else
                {
                    curr=curr.next;
                }
            }
            return A;
    }
}