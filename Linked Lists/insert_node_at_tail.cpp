// Complete the insertNodeAtTail function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
	  if(head == nullptr){
        head = new SinglyLinkedListNode(data);
    }
    

    else{
    SinglyLinkedListNode* tail = head;
    while(tail->next != NULL){
        tail= tail->next;
    }

    tail->next = new SinglyLinkedListNode(data);

    }
    return head;
    


}
