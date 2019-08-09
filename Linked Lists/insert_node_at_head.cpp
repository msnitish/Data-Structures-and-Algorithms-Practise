/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
	 SinglyLinkedListNode* head = llist; // Creating a head pointer pointing to llist.
    SinglyLinkedListNode* temp = new SinglyLinkedListNode(data); // Creatig a new node
   // temp->data = data;
    temp->next = head; // Pointing the temp to head, which is llist , means the second element now.
    llist = temp; // The head is now pointed to the first element of linked list.
        
    
    return llist;

}
