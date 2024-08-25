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
    void leaf_one(TreeNode* root1, int x){
        if(root1==NULL)return;
        leaf_one(root1->left,x);
        leaf_one(root1->right,x);
        if(root1->left==NULL && root1->right==NULL){
            if(x==1)v1.push_back(root1->val);
            if(x==2)v2.push_back(root1->val);
        }
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        leaf_one(root1,1);
        leaf_one(root2,2);
        return v1==v2;
    }
};