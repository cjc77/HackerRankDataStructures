/*
The height of a binary tree is the number of edges between the tree's root and its furthest leaf. This means that a tree containing a single node has a height of 0.

Complete the getHeight function provided in your editor so that it returns the height of a binary tree. This function has a parameter, root, which is a pointer to the root node of a binary tree.
*/

int getHeight(Node * root)
{
    // If empty
    if(!root)
        return 0;
    // If there are no links
    if(!root->left && !root->right)
        return 0;
    int leftHeight = 1 + getHeight(root->left);
    int rightHeight = 1 + getHeight(root->right);
    if(leftHeight > rightHeight)
        return leftHeight;
    else
        return rightHeight;
}
