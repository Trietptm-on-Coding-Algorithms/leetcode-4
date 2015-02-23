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

		void mySolve(TreeNode *cur, int cur_level, vector< vector<int> > &ans )
		{
			ans[cur_level].push_back(cur->val);

			if(cur->left) mySolve(cur->left, cur_level+1, ans);
			if(cur->right) mySolve(cur->right, cur_level+1, ans);
		}

		vector<vector<int> > levelOrder(TreeNode *root) 
		{
			if(!root)
			{
				vector< vector<int> > ret;
				return ret;
			}

			int height = 1;
			getHeight(root, 1, height);
			vector< vector<int> > ret(height);
			mySolve(root, 0, ret);
			return ret;
		}
};
