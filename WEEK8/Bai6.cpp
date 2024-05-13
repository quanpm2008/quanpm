

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
    SinglyLinkedListNode *newNode = new SinglyLinkedListNode(data);
    if(head == nullptr)
    {
       head = newNode;
    }
    else
    {
         SinglyLinkedListNode *tmp = head;
        while(tmp->next != nullptr)
        {
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }

    return head;


}

