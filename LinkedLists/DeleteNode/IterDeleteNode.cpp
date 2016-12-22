/*
This is just a function.
Delete specific node from a linked list.
*/


Node * Delete(Node * head, int position)
{
    Node * current = head;
    Node * previous = NULL;
    int currPos = 0;
    if(!head) {
        return head;
    }
    if(position == 0) {
        current = head->next;
        delete head;
        head = current;
    }
    else {
        // Find "position" or stop if reached end of list
        while(current && currPos < position) {
            previous = current;
            current = current->next;
            ++currPos;
        }
        // If "position" exists in this list
        if(currPos == position) {
            previous->next = current->next;
            delete current;
        }
    }
    return head;
}
