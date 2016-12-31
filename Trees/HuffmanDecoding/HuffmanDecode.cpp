


void decode_huff(node * root, string s)
{
    node * current = root;
    int size = s.size();
    char zero = '0';
    char one = '1';
    int ltr = 0;
    if(!root) {
        return;
    }

    while(ltr < size) {
        if(s[ltr] == zero) {
            current = current->left;
            if(!current->left && !current->right) {
                cout << current->data;
                current = root;
            }
            ++ltr;
        }
        else if(s[ltr] == one) {
            current = current->right;
            if(!current->left && !current->right) {
                cout << current->data;
                current = root;
            }
            ++ltr;
        }
    }
}
