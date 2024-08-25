#include <iostream>     // Input/output streams (cin, cout, cerr, etc.)
#include <fstream>      // File streams (for file input/output)
#include <iomanip>      // Input/output manipulators (for formatting)
#include <string>       // String manipulation
#include <vector>       // Dynamic arrays
#include <list>         // Doubly linked list
#include <queue>        // Queue data structure
#include <stack>        // Stack data structure
#include <map>          // Associative array (key-value pairs)
#include <set>          // Set data structure
#include <algorithm>    // Standard algorithms (sorting, searching, etc.)
#include <cmath>        // Mathematical functions
#include <ctime>        // Date and time functions
#include <cstdlib>      // Standard library utilities (includes functions like `rand()` and `exit()`)
#include <cstring>      // C-style string functions
#include <cassert>      // Assertions
#include <utility>
#include <limits.h>
 
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
int sz = 0;
Node* binary_tree_input(){
    int val;cin>>val;
    Node *root;
    if(val == -1)root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root)q.push(root);
    while (!q.empty())
    {
       Node *f = q.front();q.pop();
       int l,r;cin>>l>>r;
       if(l!=-1)f->left=new Node(l);
       if(r!=-1)f->right=new Node(r);
       
       if(f->left)q.push(f->left);
       if(f->right)q.push(f->right);
    }
    return root;
    
}
void levelOrder_print(Node *root){
    if(root == NULL)return;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout<<f->val<<" ";
        if(f->left)q.push(f->left);
        if(f->right)q.push(f->right);
    } 
}
void preOrder_print(Node *root){
    //base case
    if(root==NULL)return;
    cout<<root->val<<" ";
    preOrder_print(root->left);
    preOrder_print(root->right);
}
void postOrder_print(Node *root){
    if(root==NULL)return;
    postOrder_print(root->left);
    postOrder_print(root->right);
    cout<<root->val<<" ";
}
void inOrder_print(Node *root){
    if(root == NULL)return;
    inOrder_print(root->left);
    cout<<root->val<<" ";
    inOrder_print(root->right);
}
void size(Node *root){
    if(root==NULL)return;
    size(root->left);
    size(root->right);
    sz++;
}
int main()
{
    Node *root = binary_tree_input();
    levelOrder_print(root); cout<<endl;
    preOrder_print(root);cout<<endl;
    postOrder_print(root);cout<<endl;
    inOrder_print(root);cout<<endl;
    size(root);
    cout<<"size of tree: "<<sz;

    
    return 0;
}
