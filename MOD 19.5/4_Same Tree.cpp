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
    vector<int> v1;
    vector<int> v2;
    void treecheck(TreeNode *root){
        if(root==NULL){
            v1.push_back(-9);
            return;
        }
        v1.push_back(root->val);
        treecheck(root->left);
        treecheck(root->right);
    }
    void treeCheck2(TreeNode *root){
        if(root==NULL){
            v2.push_back(-9);
            return;
        }
        v2.push_back(root->val);
        treeCheck2(root->left);
        treeCheck2(root->right);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        treecheck(p);
        treeCheck2(q);

        return v1==v2;
    }
};