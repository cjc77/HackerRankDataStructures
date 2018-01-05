/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }

   ***** return the DATA of the node where headA and headB merge
*/
int GetLength(Node * head);
void AdvanceNode(Node * & current, int targetIdx);


int FindMergeNode(Node *headA, Node *headB)
{
    int lenA = GetLength(headA);
    int lenB = GetLength(headB);
    int sizeDiff = 0;
    int mergeNodeData = 0;
    Node * currentA = headA;
    Node * currentB = headB;
    if(lenA > lenB) {
        sizeDiff = lenA - lenB;
        AdvanceNode(currentA, sizeDiff);
    }
    else if(lenB > lenA) {
        sizeDiff = lenB - lenA;
        AdvanceNode(currentB, sizeDiff);
    }
    while(currentA && currentB) {
        // If currentA and currentB are same place in memory...
        if(currentA == currentB) {
            // That means A & B have merged!
            mergeNodeData = currentA->data;
            break;
        }
        currentA = currentA->next;
        currentB = currentB->next;
    }
    return mergeNodeData;
}


// Find length of a linked list
int GetLength(Node * head)
{
    Node * current = head;
    int count = 0;
    if(!current) {
        return 0;
    }
    while(current) {
        ++count;
        current = current->next;
    }
    return count;
}


// Skip over "extra" values of list
void AdvanceNode(Node * & current, int targetIdx)
{
    int curIdx = 0;
    while(curIdx < targetIdx) {
        current = current->next;
        ++curIdx;
    }
}
