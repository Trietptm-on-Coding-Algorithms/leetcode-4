/**
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
		vector<int> now;
		map<vector<int>, bool> check;

		bool isSymmetric(TreeNode *root) {
			return Inorder(root, 0);    
		}

		bool Inorder(struct TreeNode *current, int level)
		{
			if(current == NULL) return true;

			if(current->left != NULL)
				Inorder(current->left, level+1);
			else
				now.push_back(-1);

			if(!level) //isRoot
			{
				check[now] = true;
				now.clear();
				return ReInorder(current, 0);
			}
			else
			{
				if(current->right != NULL)
					Inorder(current->right, level+1);
				else
					now.push_back(-1);
			}

			now.push_back(current->val);
		}

		bool ReInorder(struct TreeNode *current, int level)
		{
			if(current->right != NULL)
				ReInorder(current->right, level+1);
			else
				now.push_back(-1);

			if(!level)
			{
				return check[now];
			}
			else
			{
				if(current->left != NULL)
					ReInorder(current->left, level+1);
				else
					now.push_back(-1);
			}
			now.push_back(current->val);
		}
};
