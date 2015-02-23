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
		void getHeight(TreeNode *cur, int cur_height, int &final_height )
		{
			if(!cur->left && !cur->right)
			{   
				if (cur_height > final_height) final_height = cur_height;
			}   
			if(cur->left) getHeight(cur->left, cur_height+1, final_height);
			if(cur->right) getHeight(cur->right, cur_height+1, final_height);
		}

		int maxDepth(TreeNode *root) 
		{
			if(!root) return 0;
			int ret = 1;
			getHeight(root, 1, ret);
			return ret;
		}
};
