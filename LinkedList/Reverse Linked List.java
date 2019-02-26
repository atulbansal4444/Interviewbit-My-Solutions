/*Reverse of Linked list*/
public class Solution {
    public ListNode reverseList(ListNode A) {
        if(A == null || A.next == null)
        {
            return A;
        }
        ListNode curr = A;
        ListNode prev = null;
        while(curr!=null)
        {
            ListNode temp = curr.next;
            curr.next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
}