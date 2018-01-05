/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as
  struct Node
  {
     int data;
     struct Node *next;
  }
*/



int GetNode(Node * head, int positionFromTail)
{
    int position = 0;       // current position
    int tailLoc = 0;        // "index" of tail node
    Node * current = head;
    // Find "index" of last node
    while(current->next) {
        current = current->next;
        ++position;
    }
    tailLoc = position;
    // Loop again
    position = 0;
    current = head;
    // While further from tail than 'positionFromTail', go to next node
    while((tailLoc - position) > positionFromTail) {
        current = current->next;
        ++position;
    }
    return current->data;
}
