class Solution {
    public ListNode reverseList(ListNode head) {
        if(head == null || head.next == null )return head;
        ListNode curr=head,prev=null,next;
        while(curr!=null){
            next=curr.next;
            curr.next=prev;
            if(next==null)break;
            prev=curr;
            curr=next;
        }
        return curr;
    }
}
