#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node*right;
    node* left;

    node(d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
    node* createtree(node* root)
    {
        cout << "enter the data" << endl;
        int data;
        cin >> data;
        root = new node(data);
        if (data == -1)
        {
            return NULL;
        }
        cout << "enter the data for inserting the left part of tree" << endl;
        root->left = createtree(root->left);
        cout << "enter the data that should be on the right part of tree" << endl;
        root->right = createtree(root->right);
        return root;
    }
}

int main()
{
    node* root=NULL;
   root= createtree(root);

    return 0;
}
