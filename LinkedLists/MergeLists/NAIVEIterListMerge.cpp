Node * MergeLists(Node * headA, Node * headB)
{
    // Arg ptrs
    Node * currentA = headA;
    Node * currentB = headB;
    // New list ptrs
    Node * headC = NULL;
    Node * currentC = NULL;
    if(!headA) {
        return headB;
    }
    if(!headB) {
        return headA;
    }
    // Create a headC
    if(currentA->data <= currentB->data) {
        headC = new Node;
        headC->data = currentA->data;
        headC->next = NULL;
        currentC = headC;
        currentA = currentA->next;
    }
    else {
        headC = new Node;
        headC->data = currentB->data;
        headC->next = NULL;
        currentC = headC;
        currentB = currentB->next;
    }
    // While currentA and currentB are non-NULL
    while(currentA && currentB) {
        if(currentA->data <= currentB->data) {
            currentC->next = new Node;
            currentC->next->data = currentA->data;
            currentC->next->next = NULL;
            currentC = currentC->next;
            currentA = currentA->next;
        }
        else {
            currentC->next = new Node;
            currentC->next->data = currentB->data;
            currentC->next->next = NULL;
            currentC = currentC->next;
            currentB = currentB->next;
        }
    }
    // If one list empty
    if(!currentA) {
        while(currentB) {
            currentC->next = new Node;
            currentC->next->data = currentB->data;
            currentC->next->next = NULL;
            currentC = currentC->next;
            currentB = currentB->next;
        }
    }
    if(!currentB) {
        while(currentA) {
            currentC->next = new Node;
            currentC->next->data = currentA->data;
            currentC->next->next = NULL;
            currentC = currentC->next;
            currentA = currentA->next;
        }
    }
    return headC;
}
