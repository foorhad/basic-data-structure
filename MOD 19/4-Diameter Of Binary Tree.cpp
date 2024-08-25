int mx = 0;
int height(TreeNode<int> *root){
    if(root==NULL)return 0;
    int l = height(root->left);
    int r = height(root->right);
    int d = l + r;
    mx = max(mx,d);
    return max(l,r)+1;
}
int diameterOfBinaryTree(TreeNode<int> *root){
	
    height(root);
    return mx;    
}
