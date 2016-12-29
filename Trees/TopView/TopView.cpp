void top_left(node * root);
void top_right(node * root);

void top_view(node * root)
{
    top_left(root->left);
    cout << root->data << ' ';
    top_right(root->right);
}


void top_left(node * root)
{
    if(!root)
        return;
    top_left(root->left);
    cout << root->data << ' ';
}


void top_right(node * root)
{
    if(!root)
        return;
    cout << root->data << ' ';
    top_right(root->right);
}
