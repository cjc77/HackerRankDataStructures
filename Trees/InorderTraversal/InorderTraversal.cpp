/* you only have to complete the function given below.
Print the values in the tree's inorder traversal as a single line of space-separated values.
Node is defined as

struct node
{
    int data;
    node* left;
    node* right;
};

*/

void inOrder(node *root) 
{
    if(!root) {
        return;
    }
    inOrder(root->left);
    cout << root->data << ' ';
    inOrder(root->right);
}
