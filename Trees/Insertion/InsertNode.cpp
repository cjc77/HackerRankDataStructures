/*
You are given a pointer to the root of a binary search tree and a value to be inserted into the tree. Insert this value into its appropriate position in the binary search tree and return the root of the updated binary tree. You just have to complete the function.
*/



node * insert(node * root, int value)
{
    // Make a new node
    node * newNode = new node;
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    // for traversal
    node * parent = NULL;
    node * current = root;

    if(!root) {
        root = newNode;
        return root;
    }
    else {
        while(current) {
            parent = current;
            if(value < current->data)
                current = current->left;
            else
                current = current->right;
        }
        // Add newNode to the tree
        if(value < parent->data)
            parent->left = newNode;
        else
            parent->right = newNode;
    }
    return root;
}
