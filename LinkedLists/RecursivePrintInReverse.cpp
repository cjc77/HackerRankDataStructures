/*
This is just a function.
Print all nodes in a linked list BACKWARDS!
*/


void ReversePrint(Node * head)
{
    if(!head) {
        return;
    }
    ReversePrint(head->next);
    cout << head->data << endl;
}
