#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
   queue<pair<TreeNode<int>*,int>>q;
   if(root)q.push({root,1});

    bool fr[3000] = {false};
    vector<int> v;

   while(!q.empty()){
       pair<TreeNode<int>*,int> p = q.front();
       q.pop();
       TreeNode<int>* n = p.first;
       int l = p.second;

        if(fr[l] == false){
            v.push_back(n->data);
            fr[l] = true;
        }

        if(n->left)q.push({n->left,l+1});
        if(n->right)q.push({n->right,l+1});
   }
   return v;



}