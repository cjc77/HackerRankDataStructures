/* you only have to complete the function given below.
Print the values in the tree's postorder traversal as a single line of space-separated values.
Node is defined as

struct node
{
    int data;
    node* left;
    node* right;
};

*/


void postOrder(node *root)
{
    if(!root) {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout << root->data << ' ';
}
