/*
This is just a function.
Compare 2 linked lists and return 1 if they match, 0 if not.
*/


int CompareLists(Node * headA, Node * headB)
{
    Node * currentA = headA;
    Node * currentB = headB;
    int match = 1;

    // If either head is empty
    if(!currentA || !currentB) {
        // If one is empty and not the other
        if((!currentA && currentB) || (!currentB && currentA)) {
            match = 0;
        }
        // If they're both empty
        else {
            match = 1;
        }
    }
    else {
        // While both nodes not NULL
        while(currentA && currentB) {
            // if data doesn't match
            if(currentA->data != currentB->data) {
                match = 0;
            }
            currentA = currentA->next;
            currentB = currentB->next;
        }
        // If one is longer
        if(currentA || currentB) {
            match = 0;
        }
    }
    return match;
}
