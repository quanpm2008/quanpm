

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
    while(head != nullptr)
    {
        cout<<head->data<<endl;
        head = head->next;
    }
}

void printLinkedList1(SinglyLinkedListNode* head) {
    if(head == nullptr)
    {
        return;
    }
    else
    {
        cout<<head->data<<endl;
        printLinkedList(head->next);
    }
}

