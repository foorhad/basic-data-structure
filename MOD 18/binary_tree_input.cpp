#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *left;
    Node *right;

    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* binary_tree_input(){
    int val; cin>>val;
    Node* root;
    if(val == -1) root = NULL; 
    else root = new Node(val);
    queue<Node*> q;
    if(root)q.push(root);

    while (!q.empty())
    {
        //1st
        Node *f = q.front();
        q.pop();
        //2nd
        int l,r;cin>>l>>r;
        if(l!=-1)f->left=new Node(l);
        if(r!=-1)f->right=new Node(r);
        //3rd 
        if(f->left)q.push(f->left); 
        if(f->right)q.push(f->right); 
    }
    return root;
}
void levelOrder_print(Node *root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) //0(N)
    {
        Node *f = q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    }
}
int main()
{
    Node *root = binary_tree_input();
    levelOrder_print(root);
    
    return 0;
}




