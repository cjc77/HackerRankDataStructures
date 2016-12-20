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
