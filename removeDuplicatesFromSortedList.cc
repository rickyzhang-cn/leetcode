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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* cur=head;
        while(cur && cur->next) {
            if(cur->val == cur->next->val) {
                ListNode* tmp=cur->next;
                cur->next=cur->next->next;
                delete tmp;
            } else {
                cur=cur->next;
            }
        }
        return head;
    }
};
