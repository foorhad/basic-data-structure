#include <bits/stdc++.h> 

long long cnt = 0;
void left_sum(BinaryTreeNode<int> *root){
	if(root == NULL)return;
	if(root->left){
		cnt += root->left->data;
	}
	left_sum(root->left);
	left_sum(root->right);
}
long long leftSum(BinaryTreeNode<int> *root)
{
	cnt = 0;
	left_sum(root);
	return cnt;
}
