/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/



Node * RemoveDuplicates(Node * head)
{
    Node * current = head;
    Node * previous = NULL;
    // If it's NULL or only 1 node
    if(!head) {
        return head;
    }
    if(!head->next) {
        return head;
    }
    else {
        while(current->next) {
            previous = current;
            current = current->next;
            // Keep reference to previous, in case more than 1 repeat
            while(current->next && (previous->data == current->data)) {
                previous->next = current->next;
                delete current;
                current = previous->next;
            }
        }
        if(previous->data == current->data) {
            delete current;
            previous->next = NULL;
        }
    }
    return head;
}
