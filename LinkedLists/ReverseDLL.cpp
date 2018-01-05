/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    Node * lead = head;
    Node * follow = NULL;
    if(!head) {
        return head;
    }
    else {
        while(lead) {
            follow = lead;
            lead = lead->next;
            follow->next = follow->prev;
            follow->prev = lead;
        }
        head = follow;
    }
    return head;
}
