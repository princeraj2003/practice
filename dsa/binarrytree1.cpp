#include <bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node*left;
    node*right;

    // constuctor
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node*buildtree(node*root){
    cout<<"enter the data "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"enter the data for insertion on left of the tree"<<endl;
    root->left=buildtree(root->left);
    
    cout<<"enter the data for insertion on right of the tree"<<endl;
    root->right=buildtree(root->right);
    return root;
}

void levelordertraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node*temp=q.front();
        q.pop();
        if(temp==NULL){
        cout<<endl;
        if(!q.empty()){
            q.push(NULL);
        }
        }
        else{
            cout<<temp->data<<" ";   
            if(temp->left){
                q.push(temp->left);
            }
             if(temp->right){
                q.push(temp->right);
            }

                 }
    }
    
}

int main()
{
    node*root=NULL;
  root=buildtree(root);
// 1 3 7-1 -1 11 -1 -1 5 17 -1 -1 -1
levelordertraversal(root);
    return 0;
}
