/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

// Interviewbit Problem
int Solution::lPalin(ListNode* A) {
    ListNode* temp = A;
    stack<int> s;
    // We create a stack and push all these values into a stack.
    // So, that when we read it again from the top, we read the reverse order.
    while(temp!=NULL){
        s.push(temp->val);
        temp = temp->next;
    }
    //Now we check if the values of the top element in stack is same as the value we see
    // in the linked list while we traverse it.
    while(A!=NULL){
        int i = s.top();
        s.pop();
        if(A->val != i){
            return false;
        }
        A = A->next;
    }
    
    return true;
    
}
