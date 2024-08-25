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
int mx = INT_MIN;
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
int count(Node *root){
    if(root == NULL) return 0;
    int l = count(root->left);
    int r = count(root->right);
    return l+r+1;
}
int main()
{
    Node *root = binary_tree_input();
    cout<<count(root);

    return 0;
}
