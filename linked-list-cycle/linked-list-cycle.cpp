/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL)
        {
            return false;
        }
        struct ListNode *p1 ,*p2;
        p1=p2=head;
        do{
            p1=p1->next;
            p2= p2->next;
            p2 = p2?p2->next:p2;

        }while(p1 && p2 && (p1!=p2));

        return (p1==p2);
    }
};