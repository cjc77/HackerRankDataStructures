/*
You have to decode an encoded string using the Huffman tree.

You are given pointer to the root of the Huffman tree and a binary
coded string. You need to print the actual string.
*/


void decode_huff(node * root, string s)
{
    node * current = root;
    int size = s.size();
    char ZERO = '0';
    char ONE = '1';
    int letter = 0;
    // Is the darn thing empty?
    if(!root) {
        return;
    }

    while(letter < size) {
        if(s[letter] == ZERO) {
            current = current->left;
            // If we have reached a leaf
            if(!current->left && !current->right) {
                cout << current->data;
                current = root;
            }
            ++letter;
        }
        else if(s[letter] == ONE) {
            current = current->right;
            // If we have reached a leaf
            if(!current->left && !current->right) {
                cout << current->data;
                current = root;
            }
            ++letter;
        }
    }
}
