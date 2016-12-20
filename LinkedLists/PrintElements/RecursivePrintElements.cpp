void print(Node * head) 
{
    if(!head) {
        return;
    }
    cout << head->data << endl;
    print(head->next);
}
