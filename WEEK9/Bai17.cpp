
       Node* removeDuplicates(Node *head)
          {
            Node *tmp = head;

            while(tmp->next != NULL)
            {

                while(tmp->data == tmp->next->data)
                {
                    Node *kth2 = tmp->next;
                    Node *kth1 = tmp;
                    kth1->next = kth2->next;
                    delete kth2;
                    if(tmp->next == NULL)
                {
                    break;
                }
                }
                if(tmp->next == NULL)
                {
                    break;
                }
                tmp = tmp->next;

            }
            return head;
          }



