/*
Function and 2 helper functions.
Merge 2 sorted linked lists, potentially of different lengths.
*/


void CopyHead(Node * & toReplace, Node * & update, Node * & current);
void CopyNode(Node * & toReplace, Node * & update);

Node * MergeLists(Node * headA, Node * headB)
{
    // Arg ptrs
    Node * currentA = headA;
    Node * currentB = headB;
    // New list ptrs
    Node * headC = NULL;
    Node * currentC = NULL;
    if(!headA)
        return headB;
    if(!headB)
        return headA;
    // Create a headC
    if(currentA->data <= currentB->data)
        CopyHead(headC, currentA, currentC);
    else
        CopyHead(headC, currentB, currentC);
    // While currentA and currentB are non-NULL
    while(currentA && currentB) {
        if(currentA->data <= currentB->data)
            CopyNode(currentC, currentA);
        else
            CopyNode(currentC, currentB);
    }
    // If one list empty
    if(!currentA) {
        while(currentB)
            CopyNode(currentC, currentB);
    }
    if(!currentB) {
        while(currentA)
            CopyNode(currentC, currentA);
    }
    return headC;
}

void CopyHead(Node * & toReplace, Node * & update, Node * & current) {
    toReplace = new Node;
    toReplace->data = update->data;
    toReplace->next = NULL;
    update = update->next;
    current = toReplace;
}

void CopyNode(Node * & toReplace, Node * & update) {
    toReplace->next = new Node;
    toReplace->next->data = update->data;
    toReplace->next->next = NULL;
    toReplace = toReplace->next;
    update = update->next;
}
