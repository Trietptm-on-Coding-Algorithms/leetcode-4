/*
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
	public:
		int status;
		stack<TreeNode*>mystack;
		TreeNode *cur;

		BSTIterator(TreeNode *root) {
			this->cur = root;
			this->status = 0;
		}

		/** @return whether we have a next smallest number */
		bool hasNext()
		{
			if(!this->cur) return false;

			while(1)
			{
				if(!this->status) // find left
				{
					while(this->cur->left)
					{
						mystack.push(this->cur);
						this->cur = this->cur->left;
					}
					this->status = 1;
				}

				if(this->status == 1) //self
				{
					this->status = 2;
					return true; 
				}

				if(this->status == 2) // find right
				{
					if(this->cur->right) //go to right child, then traverse left grandchild
					{
						this->cur = this->cur->right;
						this->status = 0;
					}
					else // no right node
					{
						if(mystack.empty()) return false; //no more node
						else
						{
							this->cur = mystack.top();
							mystack.pop();
							this->status = 1;
						}
					}
				}
			}
		}

		/** @return the next smallest number */
		int next() {
			return this->cur->val;
		}
};

/*
 * Your BSTIterator will be called like this:
 * BSTIterator i = BSTIterator(root);
 * while (i.hasNext()) cout << i.next();
 */
