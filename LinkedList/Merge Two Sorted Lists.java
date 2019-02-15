/*
For example, given following linked lists :

  5 -> 8 -> 20 
  4 -> 11 -> 15
The merged list should be :

4 -> 5 -> 8 -> 11 -> 15 -> 20
*/
public class Solution {
    public ListNode mergeTwoLists(ListNode A, ListNode B) {
        ListNode dummyNode = new ListNode(0);
        ListNode tail = dummyNode;
        while(true)
        {
            if(A == null) 
            { 
                tail.next = B; 
                break; 
            } 
            if(B == null) 
            { 
                tail.next = A; 
                break; 
            }
            if(A.val>B.val)
            {
                tail.next = B;
                B = B.next;
                
            }
            else
            {
                tail.next = A;
                A = A.next;
            }
            tail = tail.next;
        }
        return dummyNode.next;
    }
}