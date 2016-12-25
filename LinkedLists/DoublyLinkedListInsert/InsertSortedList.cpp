/*
    Insert Node in a doubly sorted linked list
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* SortedInsert(Node *head,int data)
{
    Node * newNode = new Node;
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;

    Node * lead = head;
    Node * follow = NULL;

    if(!head) {
        head = newNode;
    }
    else {
        while(lead && newNode->data > lead->data) {
            follow = lead;
            lead = lead->next;
        }
        newNode->next = lead;
        newNode->prev = follow;
        // These values can't be accessed if nodes are NULL
        if(lead) {
            lead->prev = newNode;
        }
        if(follow) {
            follow->next = newNode;
        }
        // Does "newNode" come before head?
        if(head->data > newNode->data) {
            head = newNode;
        }
    }
    return head;
}
