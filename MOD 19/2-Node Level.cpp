#include <bits/stdc++.h> 
int nodeLevel(TreeNode<int>* root, int searchedValue)
{
    queue< pair<TreeNode<int>*,int> > q;
    q.push({root,1});
    while(!q.empty()){
        pair<TreeNode<int>*,int> p = q.front();
        TreeNode<int>* n = p.first;
        int l = p.second;
        q.pop();

        if(n->val == searchedValue)return l;

        if(n->left){
            q.push({n->left,l+1});
        }
        if(n->right){
            q.push({n->right,l+1});
        }
    }
    
}
