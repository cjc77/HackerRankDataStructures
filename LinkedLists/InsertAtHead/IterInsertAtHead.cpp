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
