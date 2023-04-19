class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next) return head; 
        ListNode* p1 = head;
        ListNode* p2 = head->next;
            ListNode* evenHead = p2;
        while(p1->next!=NULL && p2->next!=NULL)
        {
            p1->next = p2->next;
                p1 = p1->next;
                p2->next = p1->next;
                p2=p2->next;
        }
            p1->next = evenHead;
        return head;
    }
};