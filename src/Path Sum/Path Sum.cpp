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
		bool hasAns = false;

		void myPathSum(TreeNode *cur, int check_sum, int cur_sum)
		{
			if ( hasAns || !cur ) return;

			cur_sum += cur->val;

			if(!cur->left && !cur->right) //leaf
			{
				if(cur_sum == check_sum)
				{
					hasAns = true;
				}
				return;
			}

			if(cur->left)
			{
				myPathSum(cur->left, check_sum, cur_sum);
			}

			if(cur->right)
			{
				myPathSum(cur->right, check_sum, cur_sum);
			}
		}

		bool hasPathSum(TreeNode *root, int sum) 
		{
			myPathSum(root, sum, 0);

			if(hasAns) return true;
			else return false;
		}
};
