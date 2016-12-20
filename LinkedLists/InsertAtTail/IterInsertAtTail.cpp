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
