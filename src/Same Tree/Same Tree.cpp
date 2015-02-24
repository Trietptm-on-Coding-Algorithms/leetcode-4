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

		bool isSameTree(TreeNode *p, TreeNode *q) {

			if(!p && !q) return true;

			if(p && q)
			{
				if(p->val == q->val)
				{
					if( isSameTree(p->left, q->left) ) return isSameTree(p->right, q->right);
					else return false;
				}
				else return false;
			}
			else return false;
		}
};