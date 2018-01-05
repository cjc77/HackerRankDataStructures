/*
This is just a function.
Print all nodes in a linked list.
*/


void Print(Node * head)
{
    Node * current = head;
    if(current) {
        while(current) {
            cout << current->data << endl;
            current = current->next;
        }
    }
}
