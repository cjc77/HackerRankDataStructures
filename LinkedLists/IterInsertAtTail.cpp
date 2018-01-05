/*
This is just a function.
Insert a node at the tail of a linked list.
*/

Node * Insert(Node * head, int data)
{
    Node * current = head;
    Node * temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if(current) {
        while(current->next) {
            current = current->next;
        }
        current->next = temp;
    }
    else {
        head = temp;
    }
    return head;
}
