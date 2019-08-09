/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode* now = new ListNode(0);
    ListNode* dummy = now;
    while(A!=nullptr || B!=nullptr){
        if(A==nullptr){now->next = B;return dummy->next;}
        if(B==nullptr){now->next = A; return dummy->next;}
        
        if(A->val <= B->val){
            now->next = A;
            now=now->next;
            A = A->next;
        }
        else{
            now->next = B;
            now = now->next;
            B = B->next;
            
        }
        
    }
    
    return dummy->next;
    
}
