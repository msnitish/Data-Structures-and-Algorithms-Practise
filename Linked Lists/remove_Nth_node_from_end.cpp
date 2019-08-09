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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* now = new ListNode(0);
        ListNode* dummy = now;
        ListNode* fast = dummy;
        ListNode* slow = dummy;
        now->next = head;
        while(n+1>0){
            fast = fast->next;
            n--;
        }
        while(fast!=nullptr){
            fast = fast->next;
            slow = slow->next;
            
            
        }
        ListNode* temp = slow->next->next;
        slow->next = temp;
       
        return dummy->next;
    }
};
