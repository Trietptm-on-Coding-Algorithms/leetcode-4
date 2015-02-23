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
		/**
		 * height-balanced tree defination:
		 * 1. left subtree is height-balanced, so is right subtree
		 * 2. |left subtree height - right subtree height| <= 1
		 * 3. empty tree is height-balanced tree
		 */
		bool ans;
		void getHeight(TreeNode *cur, int cur_height, int &final_height )
		{
			if(!cur->left && !cur->right)
			{
				if (cur_height > final_height) final_height = cur_height;
			}
			if(cur->left) getHeight(cur->left, cur_height+1, final_height);
			if(cur->right) getHeight(cur->right, cur_height+1, final_height);
		}

		void mySolve(TreeNode *cur)
		{
			if(!ans) return;

			int left_height = 0, right_height = 0;
			if(cur->left)
			{ 
				left_height = 1;
				getHeight(cur->left, 1, left_height);
			}
			if(cur->right)
			{
				right_height = 1;
				getHeight(cur->right, 1, right_height);
			}

			if( abs(left_height - right_height) <= 1 )
			{
				if(cur->left) mySolve(cur->left);
				if(cur->right) mySolve(cur->right);
			}
			else
			{
				ans = false;
				return;
			}
		}

		bool isBalanced(TreeNode *root) 
		{
			if(!root) return true;

			ans = true;
			mySolve(root);

			return ans;
		}
};
