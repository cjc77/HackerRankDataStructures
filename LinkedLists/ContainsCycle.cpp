/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as:
    struct Node {
        int data;
        struct Node* next;
    }
*/

bool has_cycle(Node * head) {
    Node * fast = head;
    Node * slow = head;

    if(!head) {
        return false;
    }
    // Can fast be moved ahead by 2?
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            return true; 
        }
    }
    return false;
}
