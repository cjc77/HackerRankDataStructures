/*
This is just a function.
Insert a node at the head of a linked list.
*/


Node * Insert(Node * head, int data)
{
    Node * current = head;
    Node * temp = new Node;
    temp->data = data;
    temp->next = NULL;

    if(!head) {
        head = temp;
    }
    else{
        current = head;
        head = temp;
        temp->next = current;
    }
    return head;
}
