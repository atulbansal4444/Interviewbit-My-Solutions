/*
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
*/
public class Solution {
	public ListNode detectCycle(ListNode a) {
	    if(a==null || a.next == null)
	        return null;
	    
	    ListNode s = a;
	    ListNode f = a;
	    while(s!=null && f!=null && f.next!=null)
	    {
	        s=s.next;
	        f=f.next.next;
	        if(s==f)
	            break;
	    }
	    if(s!=f)
	        return null;
	        
	    s = a;
	    while(s!=f)
	    {
	        s=s.next;
            f=f.next;   
	    }
	    return s;
	}
}