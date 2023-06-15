
 ListNode* middle(ListNode* head)
 {
     ListNode* p1 = head, *p2 = head->next;
     while(p2 != NULL && p2->next != NULL )
     {
        p1 = p1-> next;
        p2 = p2-> next->next;
     }
     return p1;
 }

 ListNode* merge(ListNode* left , ListNode* right)
 {
     ListNode* result;
     if(left==NULL)
     {
         return right;
     }
     else if(right == NULL)
     {
        return left;
     }
     if(left->val <= right->val)
     {
         result = left;
         
         result->next = merge(left->next , right);
     }
     else if(right->val < left->val)
     {
          result = right;
         result->next = merge(left, right->next);
     }
     
     return result;

 }

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head == NULL || head->next == NULL)
        {
            return head;
        }
        ListNode* mid = middle(head);   
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;
        cout<<mid->val;
        left = sortList(left);
        right = sortList(right);
        ListNode* result = merge(left,right);
        return result;
    }
};