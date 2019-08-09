

// Complete the insertNodeAtPosition function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
SinglyLinkedListNode* temp;
temp = new SinglyLinkedListNode(data);
int count = 0;
for (SinglyLinkedListNode *i = head ; i != nullptr; i = i->next ){
    count++;
    if (count == position){
        temp->next = i->next;
        temp->data = data;
        i->next = temp;
        temp->next = (*i->next).next;
    }
}
return head;
}

