Node * InsertNth(Node * head, int data, int position)
{
    Node * current = head;
    Node * previous = NULL;
    Node * temp = new Node;
    temp->data = data;
    temp->next = NULL;
    int currPos = 0;

    // Is the list empty?
    if(!head) {
        head = temp;
    }
    // Is the new node being inserted @ 0?
    else if(position == 0) {
        // "head" will be "head->next" after insertion
        current = head;
        temp->next = current;
        head = temp;
    }
    else {
        // If position is larger than list, temp will be added to end
        while(current && currPos < position) {
            previous = current;
            current = current->next;
            ++currPos;
        }
        previous->next = temp;
        temp->next = current;
    }
    return head;
}
