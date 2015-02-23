/*
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
	public:
		int ret;
		void myMinDepth(TreeNode *cur, int cur_depth)
		{
			if(!cur->left && !cur->right)
			{
				if (cur_depth < ret) ret = cur_depth;
			}
			if(cur->left) myMinDepth(cur->left, cur_depth+1);
			if(cur->right) myMinDepth(cur->right, cur_depth+1);
		}

		int minDepth(TreeNode *root) 
		{
			if(!root) return 0; 
			ret = 1000000000;
			myMinDepth(root, 1);
			return ret;
		}
};
