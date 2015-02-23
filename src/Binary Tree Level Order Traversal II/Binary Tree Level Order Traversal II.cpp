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
		int height;

		void getHeight(TreeNode *cur, int cur_height)
		{
			if(!cur->left && !cur->right)
			{   
				if (cur_height > height) height = cur_height;
			}   
			if(cur->left) getHeight(cur->left, cur_height+1);
			if(cur->right) getHeight(cur->right, cur_height+1);
		}

		void mySolve(TreeNode *cur, int cur_level, vector< vector<int> > &ans)
		{
			int index = height - cur_level - 1;
			ans[index].push_back(cur->val);

			if(cur->left) mySolve(cur->left, cur_level+1, ans);
			if(cur->right) mySolve(cur->right, cur_level+1, ans);
		}

		vector<vector<int> > levelOrderBottom(TreeNode *root) 
		{
			if(!root)
			{
				vector< vector<int> > ret;
				return ret;
			}

			height = 1;
			getHeight(root, 1);
			vector< vector<int> > ret(height);
			mySolve(root, 0, ret);
			return ret;
		}
};
