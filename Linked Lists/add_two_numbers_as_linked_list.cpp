/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode dummy(0), *p = &dummy;
    int carry = 0;
    while(A || B || carry){
        if(A) carry += A->val, A=A->next;
        if(B) carry += B->val, B= B->next;
        p->next = new ListNode(carry%10);
        carry/=10;
        p=p->next;
    }
    return dummy.next;
}
