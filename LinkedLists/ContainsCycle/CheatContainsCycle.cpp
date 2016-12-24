/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/



bool has_cycle(Node * head) {
    Node * current = head;
    int nodeCount = 0;
    int max = 100;
    if(!head || !head->next) {
        return false; 
    }
    else {
        // Does it surpass max size? (max list size = 100)
        while(current && nodeCount < max + 1) {
            ++nodeCount;
            current = current->next;
        }
        if(nodeCount > max) {
            return true;
        }
        else {
            return false;
        }
    }
}
