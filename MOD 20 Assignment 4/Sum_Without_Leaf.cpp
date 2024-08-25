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
Node* bnodeInput( ){
    int val;cin>>val;
    queue<Node*>q;
    Node* root;
    if(val==-1)root=NULL;
    else root=new Node(val);

    if(root)q.push(root);

    while (!q.empty())
    {
        Node* n =q.front();
        q.pop();

        int l,r;cin>>l>>r;
        if(l!=-1)n->left = new Node(l); 
        if(r!=-1)n->right = new Node(r); 

        if(n->left)q.push(n->left);
        if(n->right)q.push(n->right);
    }  
    return root;
} 
int sum = 0;
void sumwithoutleaf(Node *root){   
    if(root==NULL)return;
    sumwithoutleaf(root->left);
    sumwithoutleaf(root->right);
    if(root->left!=NULL || root->right!=NULL){
        sum+=root->val;
    }
}
// void postorder(Node *root){
//     if(root==NULL)return;
//     cout<<root->val<<" ";
//     postorder(root->left);
//     postorder(root->right);
// }
int main()
{
    Node *root = bnodeInput();
    // postorder(root);
    sumwithoutleaf(root);
    cout<<sum<<endl;
    
    return 0;
}