/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */c
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        // if the list is empty;
        if(head==NULL)return NULL;
        
        // Now, we are moving the two pointers until they reach the proper starting point in the list.
        ListNode *cur = head, *prev = NULL;
        while(m>1){
            prev = cur;
            cur = cur->next;
            m--; n--;
        }
        // Now, these two pointers will fix the final connections of the reversed part in the linked list.
        ListNode *con = prev, *tail = cur;
        ListNode *third=NULL;;
        
        // Iteratively reverse the nodes until n becomes 0
        while (n>0){
            third = cur->next;
            cur->next = prev;
            prev = cur;
            cur = third;
            n--;
        }
        
    // Now we fix the connections of the reversed linked list with the other two left joint and right joint in the linked list.
        if(con!=NULL){
            con->next = prev;
        }
        else{
            head = prev;
        }
        tail->next = cur;
        return head;
    }
};
