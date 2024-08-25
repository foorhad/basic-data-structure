
vector<int> v;
void inOrder(TreeNode *root){
    if(root==NULL)return;
    inOrder(root->left);
    v.push_back(root->data);
    inOrder(root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{
    inOrder(root);
    return v;
}