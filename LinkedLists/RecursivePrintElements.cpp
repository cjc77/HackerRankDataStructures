/*
This is just a function.
Print all nodes in a linked list.
*/


void print(Node * head)
{
    if(!head) {
        return;
    }
    cout << head->data << endl;
    print(head->next);
}
