int heightOfBinaryTree(TreeNode<int> *root)
{
	if(root == NULL)return 0;
    else{
        int l = heightOfBinaryTree(root->left);
        int r = heightOfBinaryTree(root->right);
        return max(l,r)+1;
    }
}
