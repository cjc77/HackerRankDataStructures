void ReversePrint(Node * head)
{
    if(!head) {
        return;
    }
    ReversePrint(head->next);
    cout << head->data << endl;
}
