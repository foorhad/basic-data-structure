/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool unicheck(TreeNode* root, int val){
        if(root==NULL)return true;
        bool l = unicheck(root->left,val);
        bool r = unicheck(root->right,val);
        return l==true && r==true && (root->val==val);
    }
    bool isUnivalTree(TreeNode* root) {
        int val = root->val;
        bool l = unicheck(root,val);
        return l;
    }
};