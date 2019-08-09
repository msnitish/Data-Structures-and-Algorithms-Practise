/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
SinglyLinkedListNode *past,*present, *future;
present = head;
past = nullptr;

while(present!=nullptr){
    future = present->next;
    present->next = past;
    past = present;
    present = future;
}
return past;

}
