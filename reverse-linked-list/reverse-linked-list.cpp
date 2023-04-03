/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* a= head;
        ListNode* b = NULL;
        ListNode* c = NULL;
        if(a == NULL)return NULL;
        if(a->next == NULL)return a;
        while(a != NULL)
        {
            b = a->next;
            a->next = c;
            c = a;
            a = b;
        }
        return c;
    }
};