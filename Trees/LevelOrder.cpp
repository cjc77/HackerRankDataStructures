/*
You are given a pointer to the root of a binary tree. You need to print the level order traversal of this tree. In level order traversal, we visit the nodes level by level from left to right.
You only have to complete the function.
*/
#include <queue>


void LevelOrder(node * root)
{
    queue<node *> toVisit;
    if(!root)
        return;
    toVisit.push(root);
    while(!toVisit.empty()) {
        node * current = toVisit.front();
        cout << current->data << ' ';
        // If children, add them to queue
        if(current->left)
            toVisit.push(current->left);
        if(current->right)
            toVisit.push(current->right);
        toVisit.pop();
    }
}
