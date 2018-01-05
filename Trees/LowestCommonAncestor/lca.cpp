/*
You are given pointer to the root of the binary search tree and
two values 'v1' and 'v2'. You need to return the
lowest common ancestor (LCA) of  and  in the binary search tree.
You only need to complete the function.
*/

node * lca(node * root, int v1, int v2)
{
    if(!root)
        return NULL;
    if(root->data == v1 || root->data == v2)
        return root;
    node * left = lca(root->left, v1, v2);
    node * right = lca(root->right, v1, v2);
    if(left && right)
        return root;
    if(!left && !right)
        return NULL;
    if(left)
        return left;
    if(right)
        return right;

    // Catch-all
    return NULL;
}
