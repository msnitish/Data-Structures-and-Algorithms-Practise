/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
int Solution::lPalin(ListNode* A) {
    // Method 1 : We will use stack data structure to find if the linked list is a palindrome.
    
/*So, we first put all the elements in LL into the stack one by one. So, after filling the
stack, the top element of the stack is the last element in linked list.

We can again traverse the linked list from begin using another pointer to check for 
each value if it is equal to the top value in the stack. By this way, we get to check 
that the reversed linked list and normal LL have the same values which is what
a palindrome is.

*/
if(!A) return true;
ListNode* temp = A;
stack<int> s;
while(temp!=NULL){
    s.push(temp->val);
    temp = temp->next;
}

while(A!=NULL){
    int i = s.top();
    s.pop();
    if(A->val != i) return false;
    A = A->next;
}
return true;



    
}
