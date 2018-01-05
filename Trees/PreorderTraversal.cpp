/* you only have to complete the function given below.
Print the values in the tree's preorder traversal as a single line of space-separated values.
Node is defined as

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void preOrder(node *root)
{
    if(!root) {
        return;
    }
    cout << root->data << ' ';
    preOrder(root->left);
    preOrder(root->right);
}
